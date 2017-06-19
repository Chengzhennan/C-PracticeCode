//
//  Date.hpp
//  C++拷贝函数
//
//  Created by Cheng on 2017/6/11.
//  Copyright © 2017年 Cheng. All rights reserved.
//

#ifndef Date_hpp
#define Date_hpp

#include <stdio.h>

class Date {
private:
    int year;
    int day;
    int month;
    
public:
    Date();
    Date(int year, int month, int day);

};

#endif /* Date_hpp */
