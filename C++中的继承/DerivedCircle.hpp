//
//  DerivedCircle.hpp
//  C++中的继承
//
//  Created by Mac on 2017/6/19.
//  Copyright © 2017年 Mac. All rights reserved.
//

#ifndef DerivedCircle_hpp
#define DerivedCircle_hpp
#include "GeometricObject.hpp"

#include <stdio.h>

class Circle: public GeometricObject
{
public:
    Circle();
    Circle(double);
    Circle(double radius, string color, bool filled);
    double getRadius();
    void setRadius(double);
    double getArea();
    double getPerimeter();
    double getDiameter();
    
private:
    double radius_;
};  // Must place semicolon here

#endif /* DerivedCircle_hpp */
