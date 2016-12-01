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

/**
 * Constructs a clue object
 * @param size The value of the clue
 */
Clue::Clue(int size) {
    this->size=size;
    upperSpan=0;
    lowerSpan=0;
    upperLimit=0;
    lowerLimit=0;
    isSolved=false;
}

/**
 * Deconstructor for the clue object
 */
Clue::~Clue() {
}

/**
 * Gets the value of the clue
 * @return the value of the clue
 */
int Clue::getSize() const{
    return size;
}