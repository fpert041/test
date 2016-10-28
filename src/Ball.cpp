//
//  Ball.cpp
//  bouncingBalls
//
//  Created by Francesco Perticarari on 28/10/2016.
//
//

#include "Ball.hpp"


Ball::Ball(float _x, float _y, int _dim):x(_x), y(_y),dimension(_dim){
    speedX = ofRandom(-1, 1);
    speedY = ofRandom(-1, 1);
    
    color.set(ofRandom(255),ofRandom(255), ofRandom(255));
    
}

Ball::Ball(){ //default constructor
    x=ofGetWidth()/2;
    y=ofGetHeight()/2;
    dimension=10;
    speedX = ofRandom(-1, 1);
    speedY = ofRandom(-1, 1);
    
    color.set(ofRandom(255),ofRandom(255), ofRandom(255));    
}

void Ball::update(){
    if(x<0){
        x=0;
        speedX*=-1;
    } else if(x>ofGetWidth()){
        x=ofGetWidth();
        speedX*=-1;
    }
    
    if(y<0){
        y=0;
        speedY*=-1;
    } else if(y>ofGetHeight()){
        y=ofGetHeight();
        speedY*=-1;
    }
    
    x+=speedX;
    y+=speedY;
}

void Ball::draw(){
    ofSetColor(color);
    ofDrawCircle(x, y, dimension);
}
