// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in October 2022
// A program that finds if the user's integer is positive, negative, or zero

#include <iostream>
#include <random>

int integer;

int main() {
    // Finds if the user's integer is positive, negative, or zero

    std::cout << "Enter an integer: ";
    std::cin >> integer;
    std::cout << std::endl;
    if (integer > 0) {
        std::cout << integer << " is a positive integer.";
    } else if (integer < 0) {
        std::cout << integer << " is a negative integer.";
    } else {
        std::cout << integer << " is zero.";
    }
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
