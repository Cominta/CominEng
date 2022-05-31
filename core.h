#ifndef CORE_H
#define CORE_H

#include "SFML/include/Graphics.hpp"

namespace ce 
{
    class Core 
    {
        private:
            sf::RenderWindow* window;

        public:
            Core();
            ~Core();

            void render();
            void update();
            void start();
    };
}

#endif