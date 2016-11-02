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
#include <vector>

class Clue {
public:
    Clue(int size=0);
    virtual ~Clue();
    int upperSpan;
    int lowerSpan;
    int upperLimit;
    int lowerLimit;
    std::vector<int> answers;
    int getSize() const;
    bool solved;
private:
    int size;
};

#endif /* CLUE_H */

