/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LineSolver.h
 * Author: Lance Lott
 *
 * Created on October 18, 2016, 5:04 PM
 */

#ifndef LINESOLVER_H
#define LINESOLVER_H
#include <iostream>
#include <cstdlib>
#include "Clue.h"

class LineSolver {
public:
    LineSolver();
    virtual ~LineSolver();
    bool check(int line[Clue::MAX_LENGTH], Clue *clue[Clue::CLUE_LENGTH]);
    bool checkNoEdit(int line[Clue::MAX_LENGTH], Clue *clue[Clue::CLUE_LENGTH]);
private:
    bool adjustSpan(int line[Clue::MAX_LENGTH], Clue *clue[Clue::CLUE_LENGTH]);
    bool adjustGrid(int line[Clue::MAX_LENGTH], Clue *clue[Clue::CLUE_LENGTH]);
    bool checkGrid(int line[Clue::MAX_LENGTH], Clue *clue[Clue::CLUE_LENGTH]);
};

#endif /* LINESOLVER_H */

