//
//  Date.hpp
//  C++中的拷贝构造函数
//
//  Created by Mac on 2017/6/9.
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
    void setYear(int);
    int getYear();
    
    Date(int year, int month, int day);
};

#endif /* Date_hpp */
