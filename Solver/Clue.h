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

class Clue {
public:
    const static int MAX_LENGTH=25;
    const static int CLUE_LENGTH=13;
    Clue(int size=0);
    virtual ~Clue();
    int upperSpan;              // For solving, initially 0
    int lowerSpan;              // For solving, initially 0
    int upperLimit;             // For solving, initially 0
    int lowerLimit;             // For solving, initially 0
    int answers[MAX_LENGTH];    // For solving, initially empty
    int getSize() const;        // Returns the value of the clue
    bool isSolved;              // True if clue is solved
private:
    int size;                   // Value of the clue
};

#endif /* CLUE_H */

