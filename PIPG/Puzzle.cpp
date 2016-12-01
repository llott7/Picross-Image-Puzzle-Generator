/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Puzzle.cpp
 * Author: Lance Lott
 * 
 * Created on October 18, 2016, 5:03 PM
 */

#include "Puzzle.h"

/**
 * Constructs a puzzle object
 * @param horizSize The horizontal dimensions of the puzzle
 * @param vertSize The vertical dimensions of the puzzle
 */
Puzzle::Puzzle(int horizSize, int vertSize) {
    this->horizSize=horizSize;
    this->vertSize=vertSize;
    for(int countH=0;countH<Clue::MAX_LENGTH;countH++)
        for(int countV=0;countV<Clue::MAX_LENGTH;countV++)
            grid[countH][countV]=0;
    for(int count=0;count<vertSize;count++){
        clueLine* line=new clueLine;
        for(int clueCount=0;clueCount<Clue::CLUE_LENGTH;clueCount++){
            Clue* newClue=new Clue(0);
            line->clue[clueCount]=newClue;
            line->clue[clueCount]->lowerSpan=1;
            line->clue[clueCount]->upperSpan=horizSize+1;
        }
        line->lineNum=count;
        line->orientation='r';
        rowClues[count]=*line;
    }
    for(int count=0;count<horizSize;count++){
        clueLine* line=new clueLine;
        for(int clueCount=0;clueCount<Clue::CLUE_LENGTH;clueCount++){
            Clue* newClue=new Clue(0);
            line->clue[clueCount]=newClue;
            line->clue[clueCount]->lowerSpan=1;
            line->clue[clueCount]->upperSpan=vertSize+1;
        }
        line->lineNum=count;
        line->orientation='c';
        colClues[count]=*line;
    }
}

/**
 * Deconstructs a puzzle object
 */
Puzzle::~Puzzle() {
    delete[] rowClues;
    delete[] colClues;
}

