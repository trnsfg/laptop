#pragma once
#include <iostream>

class Keyboard {
private:
    bool hasBacklight;

public:
    Keyboard(bool hasBacklight) : hasBacklight(hasBacklight) {}

    void ShowKeyboardInfo() const {
        std::cout << "Keyboard Info: \n";
        if (hasBacklight) {
            std::cout << "Backlit\n";
        }
        else {
            std::cout << "No backlight\n";
        }
    }
};