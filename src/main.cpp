#include "./headers/Game.hpp"
#include <iostream>
#include <memory>
#include <utility>

int main()
{
    auto game { std::make_unique<Game>() };
    game->start();
}
