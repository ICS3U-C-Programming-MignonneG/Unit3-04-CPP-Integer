// Copyright 2026 Mignonne Gihozo
#include <iostream>
// Created by: Mignonne Gihozo
// Created on: Oct 2026
// This program asks the user if the integer they entered is
//positive, negative, or zero.
int main() {
    // if ... then ... elseif ... else example
    int user_input;
    std::cout << "Enter an integer: ";
    std::cin >> user_input;
    if (user_input > 0) {
        std::cout << "The integer is positive." << std::endl;
    } else if (user_input < 0) {
        std::cout << "The integer is negative." << std::endl;
    } else if (user_input == 0)  {
    std::cout << "The integer is zero." << std::endl;
    } else {
    std::cout << "No idea." << std::endl;
    }
    return 0;
}

