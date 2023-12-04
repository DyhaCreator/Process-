#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

/// SETTINGS ///
int Width = 100;
int Height = 100;
std::string name = "Window";
int FrameRate = 60;

#include "Graphics.hpp"

void start();
void draw();

void print(std::string str) {
    std::cout << str << std::endl;
}

int main() {
    Graphics graph = Graphics();
    start();
    while (true) {
        draw();
    }
}