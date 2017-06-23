//
//  main.cpp
//  C++数据域封装
//
//  Created by Mac on 2017/6/1.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include <iostream>

#include "Circle.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
  
    Circle circle1(5);
    
    cout << circle1.get_arear()<< endl;
    
    
    circle1.setRadius(10);
    
    cout << circle1.get_arear()<<endl;
    
    cout << circle1.getRadius()<<endl;
    
    
    
    return 0;
}
