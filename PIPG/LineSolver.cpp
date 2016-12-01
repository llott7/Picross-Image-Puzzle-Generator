/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LineSolver.cpp
 * Author: Lance Lott
 * 
 * Created on October 18, 2016, 5:04 PM
 */

#include "LineSolver.h"

LineSolver::LineSolver() {
}

LineSolver::~LineSolver() {
}

/**
 * Checks and edits the line to solve it as far as it can
 * @param line The line to be solved
 * @param clue The clues associated with that line
 * @return  Whether or not the line was changed
 */
bool LineSolver::check(int line[], Clue *clue[]){
    bool active=true;
    bool isChanged=false;
    while(active){
        bool current=true;
        while(current)
            current=adjustSpan(line,clue);
        active=adjustGrid(line,clue);
        if(active) isChanged=true;
    }
    return isChanged;
}

/**
 * Checks but does not edit the line to be solved
 * @param line The line to be checked
 * @param clue The clues associated with that line
 * @return Whether or not the line can be changed
 */
bool LineSolver::checkNoEdit(int line[], Clue *clue[]){
    bool current=true;
    while(current)
        current=adjustSpan(line,clue);
    return checkGrid(line,clue);
}

/**
 * Adjusts the spans of the clues, the first part of the solving process
 * @param line The line to be checked
 * @param clue The clues associated with that line
 * @return Whether or not the spans were changed
 */
bool LineSolver::adjustSpan(int line[], Clue *clue[]){
    Clue* begin=new Clue();
    Clue* end=new Clue();
    end->upperSpan=clue[Clue::CLUE_LENGTH-1]->upperSpan;
    bool changed=false;
    for(int count=0;count<Clue::CLUE_LENGTH;count++){
        if(clue[count]->getSize()>0){
            Clue* prev;
            Clue* next;
            if(count==0) prev=begin;    // ensures a previous clue exists
            else prev=clue[count-1];
            if(count==Clue::CLUE_LENGTH-1) next=end;    // ensures a next clue exists
            else next=clue[count+1];
            
            // Check by size: Adjusts spans based on spans by other clues in the line
            if(clue[count]->lowerSpan<prev->lowerSpan+prev->getSize()+1){
                clue[count]->lowerSpan=prev->lowerSpan+prev->getSize()+1;
                changed=true;
            }
            if(clue[count]->upperSpan>next->upperSpan-next->getSize()-1){
                clue[count]->upperSpan=next->upperSpan-next->getSize()-1;
                changed=true;
            }
            
            // Check by space: Adjusts spans for areas based on existing Xs in the grid
            int countSpace=0;
            for(int countUp=clue[count]->lowerSpan;countUp<clue[count]->upperSpan;countUp++){
                if(line[countUp]==2){
                    if(countSpace<clue[count]->getSize()){
                        clue[count]->lowerSpan=countUp+1;
                        countSpace=0;
                        changed=true;
                    }
                    else break;
                }
                else countSpace++;
            }
            countSpace=0;
            for(int countDown=clue[count]->upperSpan;countDown>clue[count]->lowerSpan;countDown--){
                if(line[countDown]==2){
                    if(countSpace<clue[count]->getSize()){
                        clue[count]->upperSpan=countDown-1;
                        countSpace=0;
                        changed=true;
                    }
                    else break;
                }
                else countSpace++;
            }
            
            // Check by glue: Adjusts spans for areas based on existing fills in the grid
            for(int countUp=clue[count]->lowerSpan;countUp<clue[count]->upperSpan;countUp++)
                if(clue[count]->answers[countUp]==1)
                    if(clue[count]->upperSpan>countUp+clue[count]->getSize()-1){
                        clue[count]->upperSpan=countUp+clue[count]->getSize()-1;
                        changed=true;
                        break;
                    }
            for(int countDown=clue[count]->upperSpan;countDown>clue[count]->lowerSpan;countDown--)
                if(clue[count]->answers[countDown]==1)
                    if(clue[count]->lowerSpan<countDown-clue[count]->getSize()+1){
                        clue[count]->lowerSpan=countDown-clue[count]->getSize()+1;
                        changed=true;
                        break;
                    }
        }
    }
    return changed;
}

/**
 * Adjusts the grid based on new spans
 * @param line The line to be adjusted
 * @param clue The clues associated with that line
 * @return Whether or not the grid was adjusted
 */
bool LineSolver::adjustGrid(int line[], Clue *clue[]){
    bool changed=false;
    for(int count=0;count<Clue::MAX_LENGTH;count++){
        if(line[count]==0){
            int belongs[Clue::CLUE_LENGTH];
            for(int clueCount=0;clueCount=Clue::CLUE_LENGTH;clueCount++){
                belongs[clueCount]=0;
                if(clue[clueCount]->getSize()>0){
                    if(count>=clue[clueCount]->lowerSpan && count<=clue[clueCount]->upperSpan)
                        belongs[clueCount]=1;
                }
                int sum=0;
                for(int sumCount=0;sumCount<Clue::CLUE_LENGTH;sumCount++) sum+=belongs[sumCount]; // How many clues are associated with this space?
                if(sum==0){         // If no clues are associated with this space, then it is assuredly an X
                    line[count]=2;
                    changed=true;
                }
                else if(sum==1){    // If exactly one clue is associated with this space
                    int sumCount=0;
                    while(belongs[sumCount]==0)
                        sumCount++;
                    bool isOneSpace=true;
                    for(int clueSpaceCheck=clue[sumCount]->lowerSpan;clueSpaceCheck<=clue[sumCount]->upperSpan;clueSpaceCheck++)
                        if(line[clueSpaceCheck]==2){
                            isOneSpace=false;
                            break;
                        }
                    if(isOneSpace){ // If the space provided is large enough to hold the clue
                        clue[sumCount]->lowerLimit=clue[sumCount]->upperSpan-clue[sumCount]->getSize()+1;
                        clue[sumCount]->upperLimit=clue[sumCount]->lowerSpan+clue[sumCount]->getSize()-1;
                        for(int writer=clue[sumCount]->lowerSpan;writer<=clue[sumCount]->upperSpan;writer++)
                            if(writer>=clue[sumCount]->lowerLimit && writer<=clue[sumCount]->upperLimit){   // Writing by size
                                line[writer]=1;
                                changed=true;
                            }
                    }
                }
            }
        }
    }
    return changed;
}


/**
 * Checks the grid based on new spans
 * @param line The line to be checked
 * @param clue The clues associated with that line
 * @return Whether or not the line can be changed
 */
bool LineSolver::checkGrid(int line[], Clue *clue[]){
    bool changed=false;
    for(int count=0;count<Clue::MAX_LENGTH;count++){
        if(line[count]==0){
            int belongs[Clue::CLUE_LENGTH];
            for(int clueCount=0;clueCount=Clue::CLUE_LENGTH;clueCount++){
                belongs[clueCount]=0;
                if(clue[clueCount]->getSize()>0){
                    if(count>=clue[clueCount]->lowerSpan && count<=clue[clueCount]->upperSpan)
                        belongs[clueCount]=1;
                }
                int sum=0;
                for(int sumCount=0;sumCount<Clue::CLUE_LENGTH;sumCount++) sum+=belongs[sumCount];
                if(sum==0)
                    changed=true;
                else if(sum==1){
                    int sumCount=0;
                    while(belongs[sumCount]==0)
                        sumCount++;
                    bool isOneSpace=true;
                    for(int clueSpaceCheck=clue[sumCount]->lowerSpan;clueSpaceCheck<=clue[sumCount]->upperSpan;clueSpaceCheck++)
                        if(line[clueSpaceCheck]==2){
                            isOneSpace=false;
                            break;
                        }
                    if(isOneSpace){
                        clue[sumCount]->lowerLimit=clue[sumCount]->upperSpan-clue[sumCount]->getSize()+1;
                        clue[sumCount]->upperLimit=clue[sumCount]->lowerSpan+clue[sumCount]->getSize()-1;
                        for(int writer=clue[sumCount]->lowerSpan;writer<=clue[sumCount]->upperSpan;writer++)
                            if(writer>=clue[sumCount]->lowerLimit && writer<=clue[sumCount]->upperLimit)
                                changed=true;
                    }
                }
            }
        }
    }
    return changed;
}