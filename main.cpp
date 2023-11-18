// Extra Credit if we do threading 
// https://www.sfml-dev.org/tutorials/2.5/system-thread.php

//Headers
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/Window/VideoMode.hpp>
#include <iostream>
#include <sstream>
#include <vector>

//Namespace Declarations 
using namespace sf;
using namespace std;

unsigned int screenWidth;
unsigned int screenHeight;
//Main starting here

int main()
{
    screenWidth = VideoMode::getDesktopMode().width / 2;
    screenHeight = VideoMode::getDesktopMode().height / 2;
    //game.out is up to date before here

    VideoMode desktop = VideoMode::getDesktopMode();

    RenderWindow window(desktop, "Mandelbrot", Style::Default);
    //game.out is still up to date before here

    bool update = true;

    while (window.isOpen())
    {
        Event event;
    
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }
        }
    }
    //game.out is still up to date before here

}