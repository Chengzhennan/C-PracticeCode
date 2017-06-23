//
//  main.cpp
//  C++中的类
//
//  Created by Mac on 2017/6/1.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include <iostream>
using namespace std;

class Circle
{

public:
    double radius;
    
    //构造函数
    Circle()
    {
        radius = 1;
    };
    
    //重载构造函数
    Circle(double newRadius)
    {
        radius = newRadius;
    };
    
    //计算面积的函数
    double getArea()
    {
        return radius * radius *3.14;
    };
    
    
    


};


int main(int argc, const char * argv[]) {
    
    //创建一个圆
    Circle circle1;
    
    //使用可以初始化半径的函数
    Circle circle2(5);
    
    double arear = circle1.getArea();
    
    
    cout << arear <<endl;
    
    
    
    
    return 0;
}














