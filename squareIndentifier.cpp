// Copyright (c) 2019 Matsuru All rights reserved.
//
// Created by: Matsuru Hoshi
// Created on: Oct 2019
// This is program square indentifier

#include <iostream>
#include <string>

main() {
    // This will determine if shape is square based on dimensions

    // variables
    std::string width;
    std::string length;
    int IntWidth;
    int IntLength;

    // Welcome statement
    std::cout << "Welcome, using the width and length of a rectangle, I will"
                 " tell you if it is also a square." << std::endl;
    std::cout << "Press Enter to continue." << std::endl;
    std::cin.ignore();

    // input
    std::cout << "What is the width: " << std::endl;
    std::cin >> width;
    std::cout << "What is the length: " << std::endl;
    std::cin >> length;

    // try catch in case an exception happens
    try {
        IntWidth = std::stoi(width);
        IntLength = std::stoi(length);
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid input.";
    }

    // process
    if (IntWidth == IntLength) {
        // output
        std::cout << "Your shape, with dimensions " << width << "x" <<
                     length << ", is a square.";
    } else {
        std::cout << "Your shape, with dimensions " << width << "x" <<
                     length << ", is not a square.";
    }
}
