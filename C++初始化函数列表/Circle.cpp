//
//  Circle.cpp
//  C++初始化函数列表
//
//  Created by Mac on 2017/6/7.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include "Circle.hpp"

Circle::Circle(){
    
    radius_ = 1;
    
}

Circle::Circle(int hour,int second){
    radius_ = 1;
    
    time = Time(hour,second);
    
}
