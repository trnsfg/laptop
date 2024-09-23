#pragma once
#include <iostream>
#include "gpu.h"
#include "Ram.h"
#include "Storage.h"
#include "CPU.h"
#include "Battery.h"
#include "Screen.h"
#include "Keyboard.h"

class Laptop {
private:
private:
    CPU cpu;
    RAM ram;
    Storage storage;
    Battery battery;
    Screen screen;
    Keyboard keyboard;
    GPU gpu;

public:
    Laptop(CPU cpu, RAM ram, Storage storage, Battery battery, Screen screen, Keyboard keyboard, GPU gpu) : cpu(cpu), ram(ram), storage(storage), battery(battery), screen(screen), keyboard(keyboard), gpu(gpu) {}

    void ShowLaptopInfo() const {
        cpu.ShowCPUInfo();
        ram.ShowRAMInfo();
        storage.ShowStorageInfo();
        battery.ShowBatteryInfo();
        screen.ShowScreenInfo();
        keyboard.ShowKeyboardInfo();
        gpu.ShowGPUInfo();
    }
};