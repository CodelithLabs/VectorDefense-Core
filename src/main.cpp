#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(800, 600), "VectorDefense v0.1");

    // Create a simple shape to show something is working
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    shape.setPosition(350.f, 250.f);

    std::cout << "Starting VectorDefense!" << std::endl;

    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear screen
        window.clear(sf::Color::Black);

        // Draw the shape
        window.draw(shape);

        // Update the window
        window.display();
    }

    std::cout << "Closing VectorDefense." << std::endl;
    return EXIT_SUCCESS;
}