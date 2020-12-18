// Copyright (c) 2020 Marlon Poddalgoda, All rights reserved
//
// Created by Marlon Poddalgoda
// Created on December 2020
// This program displays every integer from 1000 - 2000

#include <iostream>

int main() {
    // This function displays every integer from 1000 - 2000
    //      in 5 columns

    std::cout << "This program displays every integer from 1000-2000."
              << std::endl;

    // variable declarations
    int loopCounter;

    // process
    for (loopCounter = 1000; loopCounter <= 2000; loopCounter++) {
        if (loopCounter % 5 == 0) {
            std::cout << loopCounter << " " << std::endl;
        } else {
            std::cout << loopCounter << " ";
        }
    }
}
