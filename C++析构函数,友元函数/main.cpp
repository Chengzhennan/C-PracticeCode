//
//  main.cpp
//  C++析构函数,友元函数
//
//  Created by Mac on 2017/6/9.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include <iostream>
using namespace std;
/*
class Circle{
private:
    double radius_;
  static  int numbers_;
    
public:
    Circle(){
        numbers_ ++;
        
    };
    ~Circle(){
        
        numbers_ --;
    };
    
    int getNumbers(){
        return Circle::numbers_;
    };
    
    
    
};

int Circle::numbers_ = 0;


int main(int argc, const char * argv[]) {
    
    Circle* circle1 = new Circle();
    Circle* circle2 = new Circle();
    
    cout << circle1->getNumbers() <<endl;
    delete circle1; //自动调用析构函数 计数器--
    cout << circle2->getNumbers() <<endl;
 
    return 0;
}
 */

//友元函数 和友元类
class Date{
    friend void fGetDay();
    
    friend class AccessDate;
    
    
private:
    int year_;
    int month_;
    int day_;
public:
    Date(){
        year_ = 1;
        day_ = 1;
        month_ = 1;
    };
    
};

void fGetDay(){
    Date date;
    cout <<date.year_ <<endl;
};

class AccessDate{
    
public:
    static void p(){
        Date date;
        cout << date.year_ <<endl;
    }
    
    
};




int main(){
    
    //友元函数
    fGetDay();
//    友元类
    AccessDate acDate;
   acDate.AccessDate::p();
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}













