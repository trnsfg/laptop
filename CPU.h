#pragma once
#include <iostream>

class CPU {
private:
    int cores;
    double frequency;

public:
    CPU(int cores, double frequency) : cores(cores), frequency(frequency) {}

    void ShowCPUInfo() const {
        std::cout << "CPU Info: \n";
        std::cout << "Cores: " << cores << "\n";
        std::cout << "Frequency: " << frequency << " GHz\n";
    }
};