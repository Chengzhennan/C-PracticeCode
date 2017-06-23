//
//  main.cpp
//  C++对象传递
//
//  Created by Mac on 2017/6/2.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include <iostream>
#include "Circle.hpp"
using namespace std;

//内容拷贝, tempCircle 和 circle 的地址不一样
//void printCircle(Circle tempCircle)
//{
//    cout <<&tempCircle<<endl;
//    cout << "半径是==" <<tempCircle.getRadius()<<endl;
//}

//引用
void printCircle(Circle& tempCircle)
{
    cout <<&tempCircle<<endl;
    cout << "半径是==" <<tempCircle.getRadius()<<endl;
}

////指针
//void printCircle(Circle* tempCircle)
//{
//    cout <<&tempCircle<<endl;
//
//    cout <<tempCircle<<endl;
//
//    cout << "半径是==" <<tempCircle->getRadius()<<endl;
//}


int main(int argc, const char * argv[]) {

    Circle circle1;
    
    cout <<&circle1<<endl;
    
//    printCircle(circle1);
    
    
//    printCircle(&circle1);
    
    
    
    
    
    
    return 0;
}
