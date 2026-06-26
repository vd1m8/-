#include <SFML/Graphics.hpp>
#include <cstdlib>
#include <ctime>

using namespace sf;

int main()
{
    srand(time(0));

    RenderWindow window(VideoMode(800, 600), "Броуновское движение");

    CircleShape pixel(2);
    pixel.setFillColor(Color::Red);

    int x = 400;
    int y = 300;

    while (window.isOpen())
    {
        Event event;

        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        int dir = rand() % 4;

        switch (dir)
        {
            case 0: x += 2; break;
            case 1: x -= 2; break;
            case 2: y += 2; break;
            case 3: y -= 2; break;
        }

        pixel.setPosition((float)x, (float)y);

        window.clear();
        window.draw(pixel);
        window.display();
    }

    return 0;
}
