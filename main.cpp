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
    //Get the Desktop Resolution here && divide it by 2 to get the resolution
    screenWidth = VideoMode::getDesktopMode().width / 2;
    screenHeight = VideoMode::getDesktopMode().height / 2;

    VideoMode desktop = VideoMode::getDesktopMode();
    window.create(screenWidth, screenHeight)
}
