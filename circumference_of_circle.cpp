// Copyright (c) Cameron Carter All rights reserved
//
// Created by: Cameron Carter
// Created on: April 2021
// This program calculatess the circumference of a circle with inputted radius

#include <iostream>

int main() {
    // This function calculates circumference using tau
    const double TAU = 6.28;
    int radius;
    double circumference;

    // Input
    std::cout << "Enter the radius of a circle (mm): ";
    std::cin >> radius;

    // Process
    circumference = TAU * radius;

    // Output
    std::cout << "Circumference is " << circumference << " mm." << std::endl;
    std::cout << "\nDone." << std::endl;
}
