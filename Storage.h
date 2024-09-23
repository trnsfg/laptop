#pragma once
#include <iostream>

class Storage {
private:
    int size;

public:
    Storage(int size) : size(size) {}

    void ShowStorageInfo() const {
        std::cout << "Storage Info: \n";
        std::cout << "Size: " << size << " GB\n";
    }
};