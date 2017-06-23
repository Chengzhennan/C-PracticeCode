//
//  main.cpp
//  C++数组对象
//
//  Created by Mac on 2017/6/5.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include <iostream>
#include "Circle.hpp"
using namespace std;
double sum(Circle circleArr[], int size)
{

    double sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += circleArr[i].getArea();
    }
    return sum;
    
}

void printCircleArr(Circle circleArr[], int size)
{
    cout << "Radius\t\t"<<"Area"<<endl;
    for (int i = 0; i < size; i ++)
    {
        cout << circleArr[i].getRadius() << "\t\t" << circleArr[i].getArea() << endl;
    }

    cout << "total area is \t"<< sum(circleArr , size) << endl;

}




int main(int argc, const char * argv[]) {
    
    const int SIZE = 10;
    
    //创建一个对象数组
    Circle circleArr[SIZE];
    
    //初始化数组的里每个对象的半径
    for (int i = 0; i < SIZE; i ++)
    {
        circleArr[i].setRadius(i + 1);
        
    }
    printCircleArr(circleArr, SIZE);
    
    
    
    
    
    
    return 0;
}
