#pragma once

#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"

class Snake;
class Item;

class Game
{
public:
    int static TILESIZE;
    float static SCALE;
    float static GAMEWIDTH;
    float static GAMEHEIGHT;
    sf::Texture static commonTexture;

    // initialize and destroy the member variables
    Game();
    ~Game();

    void start();

    sf::Vector2f static getRandomPosition();
private:
    sf::RenderWindow* mainWindow;
    sf::Event currentEvent;
    sf::Clock deltaClock;
    sf::Time deltaTime;

    Snake* snake;
    Item* item;

    sf::Font font;
    sf::Text textOnScreen;

    void checkCollisions();
};

