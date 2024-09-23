#pragma once
#include <iostream>

class Screen {
private:
    double size;

public:
    Screen(double size) : size(size) {}

    void ShowScreenInfo() const {
        std::cout << "Screen Info: \n";
        std::cout << "Size: " << size << " inches\n";
    }
};