//
//  Circle.cpp
//  C++中的类
//
//  Created by Mac on 2017/6/1.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include "Circle.hpp"

Circle::Circle(){


}

Circle::Circle(double tempRadius){
    radius = tempRadius;
}


void Circle::setRadius(double sRadius)
{
    radius = sRadius;

}


double Circle::getRadius(){

    return radius;

}

double Circle::get_arear()
{

    return  radius * radius *3.14;

}







