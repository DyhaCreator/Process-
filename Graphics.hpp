struct Graphics{
    bool isOpen = true;
    sf::Event ev;
    sf::RenderWindow window = sf::RenderWindow(sf::VideoMode(Width, Height), name);
    Graphics() {
        this->window.setFramerateLimit(FrameRate);
    }
};