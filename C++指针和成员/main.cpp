//
//  main.cpp
//  C++指针和成员
//
//  Created by Mac on 2017/6/1.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include <iostream>
#include "Circle.hpp"
using namespace std;

int main(int argc, const char * argv[]) {

    Circle circle1;
    Circle *pCircle = &circle1;
    
    cout << pCircle->radius <<endl;
    
    
    //为了保留对象, 使用 new 运算符创建对象
    
    Circle *c1 = new Circle();
    Circle *c2 = new Circle(5);

    cout << c1->get_arear()<<endl;
    cout << c2->get_arear()<<endl;

    delete c1;
    delete c2;
    
    
    
    
    
    return 0;
}
