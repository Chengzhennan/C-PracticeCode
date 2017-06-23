//
//  main.cpp
//  C++中的继承
//
//  Created by Mac on 2017/6/19.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include <iostream>
#include "DerivedCircle.hpp"
#include "GeometricObject.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    
    GeometricObject shap;
    shap.setColor("redColor");
    
    cout << shap.toString() << endl  <<endl;
    
    //创建子类
    Circle circle;
    circle.setColor("blueColor");
    circle.setFilled(true);
    cout << circle.toString() << endl << endl;
    
    
    
    
    
    
    
    return 0;
}
