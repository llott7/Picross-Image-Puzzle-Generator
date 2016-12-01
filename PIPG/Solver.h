/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solver.h
 * Author: Lance Lott
 *
 * Created on October 18, 2016, 5:57 PM
 */

#ifndef SOLVER_H
#define SOLVER_H
#include "LineSolver.h"
#include "Puzzle.h"
#include <iostream>

/**
 * clueLine struct, holds information for a line
 */


/**
 * Solver object solves a puzzle
 */
class Solver {
public:
    Solver();
    Solver(Puzzle* puzzle);
    virtual ~Solver();
    bool solveLogic();
private:
    Puzzle* puzzle;
    LineSolver linesolver;
    std::vector<clueLine> clueStack;
};

#endif /* SOLVER_H */

