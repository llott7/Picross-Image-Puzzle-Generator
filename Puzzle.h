/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Puzzle.h
 * Author: Lance Lott
 *
 * Created on October 18, 2016, 5:03 PM
 */

#ifndef PUZZLE_H
#define PUZZLE_H
#include <cstdlib>
#include <vector>
#include "Clue.h"

class Puzzle {
public:
    Puzzle(int horizSize=0, int vertSize=0);
    Puzzle(const Puzzle& orig);
    virtual ~Puzzle();
    std::vector<std::vector<int> > grid;        // The solution grid, initially empty
    std::vector<std::vector<Clue> > rowClues;   // The set of Clue objects for the rows
    std::vector<std::vector<Clue> > colClues;   // The set of Clue objects for the columns
    int horizSize;  // Horizontal dimension of the puzzle
    int vertSize;   // Vertical dimension of the puzzle
private:
    
};

#endif /* PUZZLE_H */

