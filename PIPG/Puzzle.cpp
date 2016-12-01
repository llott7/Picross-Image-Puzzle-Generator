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
    for(int count=0;count<Clue::MAX_LENGTH;count++){
        grid[count][count]=0;
        rowClues[count][count]=new Clue();
        colClues[count][count]=new Clue();
    }
}

/**
 * Deconstructs a puzzle object
 */
Puzzle::~Puzzle() {
    delete[] rowClues;
    delete[] colClues;
}

