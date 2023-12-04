# ProcessPP
Open source project

for your program to work, you will need to create a file in the folder with your program comp.sh you will need to write the following into it:

g++ -c main.cpp -I /SFML/include<br>
g++ main.o -o app -L /SFML/lib -lsfml-graphics -lsfml-window -lsfml-system<br>
rm main.o<br>
./app<br>

SFML you can download here -> https://dyhacreator.github.io/SFML.zip