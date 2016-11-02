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
    Puzzle();
    Puzzle(const Puzzle& orig);
    virtual ~Puzzle();
    std::vector<std::vector<int> > grid;
    std::vector<std::vector<Clue> > rowClues;
    std::vector<std::vector<Clue> > colClues;
private:
};

#endif /* PUZZLE_H */

