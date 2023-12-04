#include <SFML/Graphics.hpp>

class Graphics{
public:
    bool isOpen = true;
    sf::Event ev;
    sf::RenderWindow window = sf::RenderWindow(sf::VideoMode(Width, Height), name);
    Graphics() {
        this->window.setFramerateLimit(FrameRate);
    }
    void update(){
        this->isOpen = this->window.isOpen();
        while(this->window.pollEvent(this->ev)){
            switch(this->ev.type){
            case sf::Event::Closed:
                this->window.close();
                break;
            }
        }
    }
};