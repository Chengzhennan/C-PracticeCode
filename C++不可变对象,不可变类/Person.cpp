//
//  Person.cpp
//  C++不可变对象,不可变类
//
//  Created by Mac on 2017/6/7.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include "Person.hpp"


Person::Person(int id, int year, int month, int day)
{
    this->id_ = id;
    
    birthDate_ = new  Date(year, month, day);
}

Person::Person()
{
    
}


int Person::getId(){
    
    return id_;
    
    
}

Date* Person::getBirthDate()
{
    return birthDate_;
}

