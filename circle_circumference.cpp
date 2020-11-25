// Copyright (c) 2020 Sean McLeod All rights reserved

// Created by Sean McLeod
// Created on November 2020
// This program can calculate the circumference of a circle with
//    radius entered by users

#include <iostream>

int main()  {
    // This function calculates the circumference of a circle
    int radius;
    double circumference;
    const double TAU = 6.28;

    // input
    std::cout << "Enter the radius of the circle (mm):" << std::endl;
    std::cin >> radius;

    // process
    circumference = TAU*radius;

    // output
    std::cout << "" << std::endl;
    std::cout << "Circumference is " << circumference << "mm" << std::endl;
}
