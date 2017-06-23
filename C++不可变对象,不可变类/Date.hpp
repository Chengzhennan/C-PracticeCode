//
//  Date.hpp
//  C++不可变对象,不可变类
//
//  Created by Mac on 2017/6/7.
//  Copyright © 2017年 Mac. All rights reserved.
//

#ifndef Date_hpp
#define Date_hpp

#include <stdio.h>

class Date {
private:
    int year_;
    int month_;
    int day_;
    
public:
    Date(int,int,int);
    int getYear();
    void setYear(int);
    
};





#endif /* Date_hpp */
