//
//  Rectangle.hpp
//  C++中的继承
//
//  Created by Mac on 2017/6/19.
//  Copyright © 2017年 Mac. All rights reserved.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp
#include "GeometricObject.hpp"
#include <stdio.h>

class Rectangle: public GeometricObject  {
    
public:
    Rectangle();
    Rectangle(double width, double height);
    Rectangle(double width, double height, string color, bool filled);
    double getWidth();
    void setWidth(double);
    double getHeight();
    void setHeight(double);
    double getArea();
    double getPerimeter();
private:
    double width_;
    double height_;
    
    
};

#endif /* Rectangle_hpp */
