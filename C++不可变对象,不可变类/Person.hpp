//
//  Person.hpp
//  C++不可变对象,不可变类
//
//  Created by Mac on 2017/6/7.
//  Copyright © 2017年 Mac. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include "Date.hpp"
class Person{
    
private:
    Date* birthDate_;
    int id_;
public:
    Person(int id,int year,int month,int day);
    
    
    Person();
    
    int getId();
    Date* getBirthDate();
    
    
};

#endif /* Person_hpp */
