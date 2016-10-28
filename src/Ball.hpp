//
//  Ball.hpp
//  bouncingBalls
//
//  Created by Francesco Perticarari on 28/10/2016.
//
//

#include <stdio.h>

#ifndef _BALL //if this class has not been defined -> the prg can define it
#define _BALL //by using this conditional structure the compiler is not going to call this class more than once = include guard

//#pragma once //I think this is the same as the above -isn't it?

#include "ofMain.h" //reference the OF framework

class Ball{
    public:
    //functions:
        void update();
        void draw();
    
    //variables:
        float x; //pos
        float y;
        float speedX; //speed & direction
        float speedY;
    
        int dimension; //specifications
        ofColor color;
    
        Ball(float _x, float _y, int _dim); //constructor
        Ball(); //you need a default constructor to create empty variables in the header file - even an empty one - otherwise you need to create a dummy variable with the constructor's parameters right in the header :) 
    
    private:
};

#endif /* Ball_hpp */
