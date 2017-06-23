//
//  Date.cpp
//  C++中的拷贝构造函数
//
//  Created by Mac on 2017/6/9.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include "Date.hpp"

Date::Date(int year, int month, int day){
    year_ = year;
    month_ = month;
    day_ = day;
}

void Date::setYear(int year)
{
    year_ = year;
}
int Date::getYear()
{
    
    return year_;
}
