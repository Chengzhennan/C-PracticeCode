//
//  main.cpp
//  C++文件打开模式
//
//  Created by Mac on 2017/7/7.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;
//fstream = ifstream + ofstream
//ios:: in 读模式
//ios:: out 写模式
//ios:: app 追加模式

int main(int argc, const char * argv[])
{
    
    fstream inout;
    
    //以写模式创建一个文件
    inout.open("/Users/i2p/Desktop/testC++/city.txt",ios::out);
    inout << "beijing"<< " " <<"shanghai"<< " " <<"guangzhou"<<endl;
    inout.close();
    
    //append file
    inout.open("/Users/i2p/Desktop/testC++/city.txt", ios::out | ios::app);
    inout <<"hongkong"<<" " <<endl;
    inout.close();
    
    //输出文件
    inout.open("/Users/i2p/Desktop/testC++/city.txt", ios::in);
    
    char city[20];
    while (!inout.eof())
    {
        inout >> city;
        cout << city <<" " <<endl;
    }
    inout.close();
    
    
    return 0;
}














