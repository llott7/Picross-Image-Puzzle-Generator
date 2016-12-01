/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solver.cpp
 * Author: Lance Lott
 * 
 * Created on October 18, 2016, 5:57 PM
 */

#include "Solver.h"

using namespace std;
/**
 * Creates an empty Solver object
 */
Solver::Solver() {
}

/**
 * Creates a solver object that holds a puzzle
 * @param puzzle The puzzle to be solved
 */
Solver::Solver(Puzzle* puzzle){
    this->puzzle=puzzle;
}

Solver::~Solver() {
}

/**
 * Solves a puzzle by logic alone
 * @return Whether or not the puzzle is solved
 */
bool Solver::solveLogic(){
    /*for(int count=0;count<puzzle->vertSize;count++){
        clueLine* line=new clueLine;
        for(int clueCount=0;clueCount<Clue::CLUE_LENGTH;clueCount++){
            std::cout << line->clue[clueCount];
            line->clue[clueCount]=puzzle->rowClues[count][clueCount];
            line->clue[clueCount]->lowerSpan=1;
            line->clue[clueCount]->upperSpan=puzzle->horizSize+1;
        }
        line->lineNum=count;
        line->orientation='r';
        clueStack.push_back(*line);  // Heap of clueline objects for solving
    }
    for(int count=0;count<puzzle->horizSize;count++){
        clueLine* line=new clueLine;
        for(int clueCount=0;clueCount<Clue::CLUE_LENGTH;clueCount++){
            line->clue[clueCount]=puzzle->colClues[count][clueCount];
            line->clue[clueCount]->lowerSpan=1;
            line->clue[clueCount]->upperSpan=puzzle->vertSize;
        }
        line->lineNum=count;
        line->orientation='c';
        clueStack.push_back(*line);
    }*/
    for(int count=0;count<puzzle->vertSize;count++)
        clueStack.push_back(puzzle->rowClues[count]);
    for(int count=0;count<puzzle->horizSize;count++)
        clueStack.push_back(puzzle->colClues[count]);
    LineSolver solve;
    while(!clueStack.empty()){
        int values[Clue::MAX_LENGTH];
        if(clueStack.front().orientation=='r')
            for(int count=0;count<Clue::MAX_LENGTH;count++)
                values[count]=puzzle->grid[clueStack.front().lineNum][count];
        else
            for(int count=0;count<Clue::MAX_LENGTH;count++)
                values[count]=puzzle->grid[count][clueStack.front().lineNum];
        bool isChanged=false;
        isChanged=solve.check(values,clueStack.front().clue);
        if(isChanged){
            for(int count=0;count<Clue::MAX_LENGTH;count++){
                if(clueStack.front().orientation=='r'){
                    if(values[count]!=puzzle->grid[clueStack.front().lineNum][count]){
                        clueLine newLine;
                        newLine.lineNum=count;
                        newLine.orientation='c';
                        for(int clueCount=0;clueCount<Clue::CLUE_LENGTH;clueCount++)
                            newLine.clue[clueCount]=puzzle->colClues[count].clue[clueCount];
                        clueStack.push_back(newLine);
                        puzzle->grid[clueStack.front().lineNum][count]=values[count];
                    }
                }
                else
                    if(values[count]!=puzzle->grid[count][clueStack.front().lineNum]){
                        clueLine newLine;
                        newLine.lineNum=count;
                        newLine.orientation='r';
                        for(int clueCount=0;clueCount<Clue::CLUE_LENGTH;clueCount++)
                            newLine.clue[clueCount]=puzzle->rowClues[count].clue[clueCount];
                        clueStack.push_back(newLine);
                        puzzle->grid[count][clueStack.front().lineNum]=values[count];
                    }
            }
            clueStack.erase(clueStack.begin());
        }
        for(int countH=0;countH<puzzle->horizSize;countH++){
            for(int countV=0;countV<puzzle->vertSize;countV++)
                cout << puzzle->grid[countH][countV];
            cout << endl;
        }
        cout << endl;
    }
    bool isSolved=true;     // True if the puzzle is completely solved
    for(int i=0;i<puzzle->horizSize;i++)
        for(int j=0;j<puzzle->vertSize;j++)
            if(puzzle->grid[i][j]==0) isSolved=false;
    return isSolved;
}