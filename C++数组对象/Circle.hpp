//
//  Circle.hpp
//  C++中的类
//
//  Created by Mac on 2017/6/5.
//  Copyright © 2017年 Mac. All rights reserved.
//

#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>

class Circle {
    
private:
   double radius_;
    
    
    
public:
    
    Circle();
    
    double getArea();
    
    double getRadius();
    void setRadius(double);
    
};





#endif /* Circle_hpp */
