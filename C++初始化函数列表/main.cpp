//
//  main.cpp
//  C++初始化函数列表
//
//  Created by Mac on 2017/6/7.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include <iostream>
using namespace std;
class Time{
    
public:
//    Time();h
    Time(int,int);
    
private:
    int second_;
    
    
};
class Circle{
    
public:
//    Circle(){}
    /*
    Circle(int hour, int second){
        
        //这里可以编译通过因为 Time 类有 Time() 初始化函数,如果 Time 没有 Time()否则要在构造列表初始化 time 属性
         time = Time(hour,second);
        
    };*/
    
    Circle(int hour, int second, int min):time(hour,second)
    {
        
        
        
    }
    
    
    
    
    
    
    
private:
    double radius_;
    Time time;
    
};



int main(int argc, const char * argv[]) {
    
    //Circle 类中有一个 Time time 属性
    
//    Circle circle1();
//
//    cout <<circle1 <<endl;
//
    
    
    return 0;
}
