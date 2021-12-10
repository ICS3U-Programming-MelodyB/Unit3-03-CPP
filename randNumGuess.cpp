// Copyright (c) 2021 Melody Berhane All rights reserved.
//
// Created by: Melody Berhane
// Created on: Dec 09,  2021
// This program asks the user to guess a
// number and if they get it wrong they are told so.

#include <iostream>
#include <random>

int main() {
    // Generates random number
    int someRandomNumber;
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0,100]
    someRandomNumber = idist(rgen);
    // std::cout << someRandomNumber << std::endl;
    // local avaiable
    int numberGuessed;

    // input
    std::cout << "Guess my favorite number from 0-9: ";
    std::cin >> numberGuessed;
    std::cout << "" << std::endl;

    // process
    if (numberGuessed == someRandomNumber) {
        // output
        std::cout << "YOU GOT IT RIGHT!";
    } else {
        std::cout << "You got it wrong, my favorite number is " \
            << someRandomNumber << "\n";
    }
}
