#pragma once
#include <iostream>

class RAM {
private:
    int size;

public:
    RAM(int size) : size(size) {}

    void ShowRAMInfo() const {
        std::cout << "RAM Info: \n";
        std::cout << "Size: " << size << " GB\n";
    }
};