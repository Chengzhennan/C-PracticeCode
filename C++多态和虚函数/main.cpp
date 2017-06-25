//
//  main.cpp
//  C++多态和虚函数
//
//  Created by Cheng on 2017/6/25.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include <iostream>

using namespace std;
/*
class C {
    
public:
  virtual string toString(){
   
       return  "class C";
   };
};

class B:public C {
    
public:
    string toString(){
        
        return  "class B";
    };
};

class A:public B {
    
public:
    string toString(){
        
        return  "class A";
    };
};

void displayObject(C x)
{

    cout << x.toString() <<endl;
    //data()函数是拿到字符串的指针, cout得到字符串的指针后就可以把字符串输出, 这里调用data()和不调用data()效果一样
    //cout << x.toString().data() <<endl;
}
*/
//为了达到多态的目的,我们使用virtual关键字
class C {
public:
    virtual string toString(){
        return  "class C";
    };
};

class B:public C {
    
public:
    string toString(){
        
        return  "class B";
    };
};

class A:public B {
    
public:
    string toString(){
        
        return  "class A";
    };
};

//使用虚函数之后,这里接收一个对象指针
void displayObject(C* x)
{
    
    cout << x->toString() <<endl;
    //data()函数是拿到字符串的指针, cout得到字符串的指针后就可以把字符串输出, 这里调用data()和不调用data()效果一样
}

//或者接收对象的引用类型
void displayObject(C& x)
{
    
    cout << x.toString() <<endl;
    //data()函数是拿到字符串的指针, cout得到字符串的指针后就可以把字符串输出, 这里调用data()和不调用data()效果一样
}
/*
 多态: 对同一消息的不同响应
 
 多态的两种表现形式: 函数的重定义, 函数的重载
 
 使用动态联编(运行时多态)的条件: 1.虚函数,在基类的同名函数前使用virtual关键字.
 2.在调用函数中使用”基类”的对象指针或者对象引用;
 
 
*/
int main(int argc, const char * argv[]) {
/*
 //虚函数使用指针传递
    C cObject;
    displayObject(&cObject);
    
    B bObject;
    displayObject(&bObject);

    A aObject;
    displayObject(&aObject);
    */
    
    //虚函数使用引用类型传递
    C cObject;
    displayObject(cObject);
    
    B bObject;
    displayObject(bObject);
    
    A aObject;
    displayObject(aObject);
    
    return 0;
}














