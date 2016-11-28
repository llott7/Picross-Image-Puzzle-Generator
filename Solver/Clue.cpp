/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Clue.cpp
 * Author: Lance Lott
 * 
 * Created on October 18, 2016, 4:54 PM
 */

#include "Clue.h"

Clue::Clue(int size) {
    this->size=size;
    upperSpan=0;
    lowerSpan=0;
    upperLimit=0;
    lowerLimit=0;
    for(int count=0;count<MAX_LENGTH;count++) answers[count]=0;
    isSolved=false;
}

Clue::~Clue() {
}

int Clue::getSize() const{
    return size;
}