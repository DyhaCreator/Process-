#include <iostream>
#include <string>

#pragma once

int Width = 100;
int Height = 100;
std::string name = "Window";
int FrameRate = 60;

void start();
void draw();
void print(std::string str) {
    std::cout << str << std::endl;
}

#include "Graphics.hpp"
#include "System.hpp"

int main() {
    System sys = System();
    sys.startProg();
}