// Extra Credit if we do threading 
// https://www.sfml-dev.org/tutorials/2.5/system-thread.php

//Headers
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/Window/VideoMode.hpp>
#include <iostream>
#include "ComplexPlane.h"
#include <sstream>
#include <vector>

//Namespace Declarations
using namespace sf;
using namespace std;


int main() {
    //grabs the desktop resolution
    VideoMode desktop = VideoMode::getDesktopMode();

    //Divides the screen's resolution by 2 to scale down the screen
    unsigned int pixelWidth = desktop.width / 2;
    unsigned int pixelHeight = desktop.height / 2;

    //Creates the window 
    RenderWindow window(VideoMode(pixelWidth, pixelHeight), "Mandlebrot Set", Style::Default);
    ComplexPlane complexPlane(pixelWidth, pixelWidth)


    while (window.isOpen()) 
    {
        Event event;

        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed) 
            {
                window.close();
            }

            //closes window if esc key is pressed
            if (Keyboard::isKeyPressed(Keyboard::Escape))
		    {
			    window.close();
		    }
        }
    }
    window.display();

}
