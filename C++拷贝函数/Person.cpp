//
//  Person.cpp
//  C++拷贝函数
//
//  Created by Cheng on 2017/6/11.
//  Copyright © 2017年 Cheng. All rights reserved.
//

#include "Person.hpp"


Person::Person(int id,int year,int month, int day){
    birthDate_ = new Date(year, month, day);
    this->id = id;
}

//自定义拷贝函数
Person::Person(Person& person){

    id = person.id;
    Date* p = person.getBirthDate();
    birthDate_ = new Date(*p); //使用Date的拷贝函数
}

Date* Person::getBirthDate(){

    return birthDate_;
}
