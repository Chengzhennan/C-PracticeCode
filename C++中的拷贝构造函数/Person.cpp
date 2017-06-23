//
//  Person.cpp
//  C++中的拷贝构造函数
//
//  Created by Mac on 2017/6/9.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include "Person.hpp"
using namespace std;

Person::Person(int id, int year, int month, int day){
    
    id_ = id;
    birthDate_ = new Date(year, month, day);
    
}



int Person::getId(){
    return  id_;
}

Date* Person::getBirthDate()
{
    return birthDate_;
}
