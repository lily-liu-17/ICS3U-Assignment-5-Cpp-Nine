// Copyright Lily Liu All rights reserved.
//
// Created by: Lily Liu
// Created on: Oct 2021
// This program will print all muliplication table 0-9

#include <iostream>

int main() {
    // This program will print all muliplication table 0-9
    int total = 0;

    for (int counter1 = 0; counter1 <= 9; counter1++) {
        for (int counter2 = 0; counter2 <= 12; counter2++) {
            total = counter1 * counter2;
            std::cout << counter1 << " x " << counter2 << " = "
            << total <<std::endl;
        }
    }

    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
