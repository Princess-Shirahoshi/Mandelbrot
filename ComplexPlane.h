#ifndef COMPLEXPLANE_H
#define COMPLEXPLANE_H

#include <SFML/Graphics.hpp>
#include <iostream>


// Need to inherit from Drawable (like in the UML diagram I think)
class ComplexPlane : public Drawable
{
    public:

        const unsigned int MAX_ITER = 64;
        const float BASE_WIDTH = 4.0;
        const float BASE_HEIGHT = 4.0;
        const float BASE_ZOOM = 0.5;
        
        enum class State
        {
            CALCULATING,
            DISPLAYING
        };
}