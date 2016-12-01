/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Clue.h
 * Author: Lance Lott
 *
 * Created on October 18, 2016, 4:54 PM
 */

#ifndef CLUE_H
#define CLUE_H

/**
 * This class represents a single clue object
 */
class Clue {
public:
    const static int MAX_LENGTH=25;     // Maximum dimensions
    const static int CLUE_LENGTH=13;    // Maximum number of clues that can exist in maximum dimensions
    Clue(int size=0);
    virtual ~Clue();
    int upperSpan;              // For solving, initially 0
    int lowerSpan;              // For solving, initially 0
    int upperLimit;             // For solving, initially 0
    int lowerLimit;             // For solving, initially 0
    int size;                   // Value of the clue
    int getSize() const;        // Returns the value of the clue
    bool isSolved;              // True if clue is solved
};

#endif /* CLUE_H */

