//
//  GeometricObject.cpp
//  C++中的继承
//
//  Created by Mac on 2017/6/19.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include "GeometricObject.hpp"
GeometricObject::GeometricObject()
{
    color_ = "white";
    filled_ = false;
    
};

GeometricObject::GeometricObject(string color, bool filled)
{
    color_ = color;
    filled_ = filled;
}

void GeometricObject::setColor(string color)
{
    this->color_ = color;
}

string GeometricObject::getColor()
{
    return this->color_;
}

void GeometricObject::setFilled(bool filled)
{
    this->filled_ = filled;
}

bool GeometricObject::isFilled()
{
    return filled_;
}

string GeometricObject::toString()
{
    return   "Geometric object | color: " + color_ +
    " | filled: " + ((filled_) ? "true" : "false");
}



