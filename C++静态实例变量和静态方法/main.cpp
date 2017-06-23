//
//  main.cpp
//  C++静态实例变量和静态方法
//
//  Created by Mac on 2017/6/9.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include <iostream>
using namespace std;
/*
class Circle {
    
private:
  double        radius_;
  static int    numberOfObjects_;
    
public:
    Circle(){
        numberOfObjects_ ++;
    };
    
 static   int getNumberOfObjects(){
        return numberOfObjects_;
    }
    
};
int Circle:: numberOfObjects_ = 0;

int main(int argc, const char * argv[]) {
    Circle circle1;
    Circle circle2;
    
    // 访问静态函数可以通过类名+域分隔符
    //或者对象名直接调用,
    //但是, 如果在访问静态函数或者静态实例变量的时候,需要在之前加上::域分隔符,这是规范
    int num = Circle::getNumberOfObjects();
    int num2 = circle1.Circle::getNumberOfObjects();
    cout << Circle::getNumberOfObjects() <<endl;
    return 0;
}
*/
// 静态/非静态函数, 静态/非静态实例 的访问

class Circle {
private:
  double    radius_;
    static int radius_static_;
    
    
    
public:
    Circle(){
        radius_ = 1;
        
    };
    
   int  getNumNoStatic( Circle circle1){
       
       //非静态函数,只能通过对象名访问静态变量
       return circle1.radius_static_;
       
   }
    
    
    static int  getNum( Circle circle1){
        
        //在静态函数中,访问一般实例变量,只能通过对象访问;
        circle1.radius_ = 10;
        
        //静态函数中访问静态变量,可以直接访问,也可以通过对象名
        circle1.radius_static_ = 9;
        radius_static_ = 9;
        
        //规范写法
        Circle::radius_static_ = 9;
        return 5;
    }
    
};

//静态实例初始化唯一方式
int Circle::radius_static_ = 0;

int main(){
    
    Circle circle1;
    
    //访问静态函数要用类名 + ::
    circle1.Circle::getNum(circle1);
    
    
}














