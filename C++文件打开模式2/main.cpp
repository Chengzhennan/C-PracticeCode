//
//  main.cpp
//  C++文件打开模式2
//
//  Created by Mac on 2017/7/7.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

//fstream 的各种状态函数,叫做流状态函数
void showStatus(fstream& stream);

int main(int argc, const char * argv[])
{

    fstream inout;
    
    inout.open("/Users/i2p/Desktop/testC++/city2.txt",ios::out);
    
    inout << "fuyang"<<endl;
    
    cout << "operate Done" <<endl;
    
    showStatus(inout);
    inout.close();
    
    //读取文件
    inout.open("/Users/i2p/Desktop/testC++/city2.txt",ios::in);
    
    char city[20];
    
    inout >> city;
    cout << city <<endl;
    
    inout.close();
    
    //关闭了之后再读取会出错,fail() 的返回值是1
    inout >>city;
    cout << "erro" << endl;
    showStatus(inout);
    
    
    
    
    
    
    
    
    
    
    return 0;
}

void showStatus(fstream& stream)
{
    cout  << " eof() "<< stream.eof() <<endl;
    cout  << " good() "<< stream.good() <<endl;

    cout  << " fail() "<< stream.fail() <<endl;

    cout  << " bad() "<< stream.bad() <<endl;


}



















