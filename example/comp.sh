g++ -c main.cpp -I /SFML/include
g++ main.o -o app.out -L /SFML/lib -lsfml-graphics -lsfml-window -lsfml-system
rm main.o
./app