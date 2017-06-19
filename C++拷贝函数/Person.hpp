//
//  Person.hpp
//  C++拷贝函数
//
//  Created by Cheng on 2017/6/11.
//  Copyright © 2017年 Cheng. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include "Date.hpp"

class Person {
private:
    int id;
    int year;
    int month;
    int day;
    Date* birthDate_;
    
public:
    Person(int,int,int,int);
    Person(Person&);
   Date* getBirthDate();
};

#endif /* Person_hpp */
