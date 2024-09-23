#include <iostream>
#include "gpu.h"
#include "Ram.h"
#include "Storage.h"
#include "CPU.h"
#include "Battery.h"
#include "Screen.h"
#include "Keyboard.h"
#include "Laptop.h"



int main()
{
    CPU cpu(6, 3.2);
    RAM ram(32);
    Storage storage(1024);
    Battery battery(5000);
    Screen screen(17.3);
    Keyboard keyboard(true);
    GPU gpu(8);

    Laptop laptop(cpu, ram, storage, battery, screen, keyboard, gpu);

    int choice;

    while (true) {
        std::cout << "\nMenu:\n";
        std::cout << "1. Show CPU Info\n";
        std::cout << "2. Show RAM Info\n";
        std::cout << "3. Show Storage Info\n";
        std::cout << "4. Show Battery Info\n";
        std::cout << "5. Show Screen Info\n";
        std::cout << "6. Show Keyboard Info\n";
        std::cout << "7. Show GPU Info\n";
        std::cout << "8. Show All Info\n";
        std::cout << "9. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 9) {
            break;
        }

        switch (choice) {
        case 1:
            cpu.ShowCPUInfo();
            break;
        case 2:
            ram.ShowRAMInfo();
            break;
        case 3:
            storage.ShowStorageInfo();
            break;
        case 4:
            battery.ShowBatteryInfo();
            break;
        case 5:
            screen.ShowScreenInfo();
            break;
        case 6:
            keyboard.ShowKeyboardInfo();
            break;
        case 7:
            gpu.ShowGPUInfo();
            break;
        case 8:
            laptop.ShowLaptopInfo();
            break;
        default:
            std::cout << "Error. Input 1-9\n";
        }
    }

}

