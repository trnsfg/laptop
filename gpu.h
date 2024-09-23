#pragma once
#include <iostream>

class GPU {
private:
    int memory;

public:
    GPU(int memory) : memory(memory) {}

    void ShowGPUInfo() const {
        std::cout << "GPU Info: \n";
        std::cout << "Memory: " << memory << " GB\n";
    }
};