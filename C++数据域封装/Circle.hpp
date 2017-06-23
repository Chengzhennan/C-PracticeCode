//
//  Circle.hpp
//  C++中的类
//
//  Created by Mac on 2017/6/1.
//  Copyright © 2017年 Mac. All rights reserved.
//

#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>


class Circle{

private:
   double radius;
    
public:
    Circle();
    Circle(double);
    
    //accessor mutator
    double getRadius();
    void setRadius(double);
    
    
   double get_arear();
    


};

#endif /* Circle_hpp */
