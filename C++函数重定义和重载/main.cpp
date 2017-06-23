//
//  main.cpp
//  C++函数重定义和重载
//
//  Created by Mac on 2017/6/23.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include <iostream>
#include "GeometricObject.hpp"
#include "Circle.hpp"


//区别函数的重载和重定义
void testFunction(){}

void testFunction(int){}



int main(int argc, const char * argv[]) {

    GeometricObject gObject1;
    Circle circle1;
    
    //Circle 继承自GeometricObject 子类也重写了父类GeometricObject的 toString 方法
    //这种叫做函数的重定义
    gObject1.toString();
    circle1.toString();
    circle1.GeometricObject::toString();
    
    //两个同名函数, 返回值,参数,参数的个数,类型等,有任何一个不同就称之为函数的重载.
    testFunction();
    testFunction(5);
    
    
    
    
    
    
    return 0;
}
