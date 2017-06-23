//
//  Circle.cpp
//  C++中的类
//
//  Created by Mac on 2017/6/1.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include "Circle.hpp"


Circle::Circle(){

    radius = 9;

}


double Circle::get_arear()
{
    return radius *radius * 3.14;
}

