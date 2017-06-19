//
//  main.cpp
//  C++继承中的构造和析构函数
//
//  Created by Cheng on 2017/6/19.
//  Copyright © 2017年 Cheng. All rights reserved.
//

#include <iostream>

using namespace std;

class Fruit {
    
public:
   // Fruit(){};
    Fruit(int id){};
    
    
};



class Apple: public Fruit {
private:
    string color_;
    
public:
    
    //Apple 继承自Fruit 必须在Apple的构造函数后面 加上Fruit(5) 显示的调用父类的有参构造函数, 因为Fruit类没有写无参构造函数, 如果Fruit类写了那么就会默认调用父类的无参构造函数,就不用写成Apple(): Fruit(5){},直接写成Apple(){};
    //Fruit(){} 有写
    //Apple(){};

    Apple(): Fruit(5){};
    
};



int main(int argc, const char * argv[]) {

    Apple apple;
    
    
    
    
    
    
    
    
    
    return 0;
    
    
    
    
    
    
    
}
