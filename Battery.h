#pragma once
#include <iostream>

class Battery {
private:
    int capacity;

public:
    Battery(int capacity) : capacity(capacity) {}

    void ShowBatteryInfo() const {
        std::cout << "Battery Info: \n";
        std::cout << "Capacity: " << capacity << " mAh\n";
    }
};