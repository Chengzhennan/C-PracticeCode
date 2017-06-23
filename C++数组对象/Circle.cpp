//
//  Circle.cpp
//  C++中的类
//
//  Created by Mac on 2017/6/5.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include "Circle.hpp"

Circle::Circle()
{
    radius_ = 1;
}

void Circle::setRadius(double radius)
{
    radius_ = radius;
}

double Circle::getRadius()
{
    return radius_;
}

double Circle::getArea()
{
    return radius_ * radius_ * 3.14;

}



