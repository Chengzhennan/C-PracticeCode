//
//  Person.hpp
//  C++中的拷贝构造函数
//
//  Created by Mac on 2017/6/9.
//  Copyright © 2017年 Mac. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include "Date.hpp"
class Person{
private:
    int id_;
    Date *birthDate_;
public:
    Person(int id, int year, int month, int day);
    
    Date * getBirthDate();
    
    int  getId();
    
    
    
    
    
};

#endif /* Person_hpp */
