//
//  main.cpp
//  C++不可变对象,不可变类
//
//  Created by Mac on 2017/6/7.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include <iostream>
#include "Person.hpp"
using namespace std;






int main(int argc, const char * argv[]) {
    
    //初始化 person 对象
    Person person(13123433, 1992,01,01);
    
    // 得到 Date指针
    Date *pDate = person.getBirthDate();
    pDate->setYear(2001);
    
    cout << person.getBirthDate()->getYear()<<endl;
    return 0;
}













