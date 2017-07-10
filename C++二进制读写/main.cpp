//
//  main.cpp
//  C++二进制读写
//
//  Created by Mac on 2017/7/7.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

void interpretCast();
void binaryWrite();
void binaryRead();

int main(int argc, const char * argv[])
{
    
//    interpretCast();
//    binaryWrite();
    binaryRead();
 
    
    return 0;
}

void binaryRead()
{
    fstream binaryio;
    
    binaryio.open("/Users/i2p/Desktop/testC++/temp.dat",ios::in | ios::binary);
    
    //如果文件里的内容是数字, 那么用数字接收,把数字转换成 char * 然后作为参数传给 read()函数.
    // 如果文件内容是字符串 就直接传入s
    int value;
//    char s[10];
    
    
    binaryio.read(reinterpret_cast<char *>(&value) , 20);
    
    cout << value <<endl;
    
    
    binaryio.close();



}

void interpretCast()
{
    
    fstream binaryio;
    
    binaryio.open("/Users/i2p/Desktop/testC++/temp.dat",ios::out | ios::binary);

    int value = 199;
    
    //使用重解释转换 因为 write() 函数接收的参数类型问题
    binaryio.write(reinterpret_cast<char *>(&value), sizeof(value));
    cout << "Done" << endl;
   
    binaryio.close();
    
    //写入的结果是 c700 , 是199的十六进制



}





void binaryWrite()
{

    fstream binaryIo;
    
    //以二进制模式写文件
    binaryIo.open("/Users/i2p/Desktop/testC++/city.dat",ios::out | ios::binary);
    
    char s[] = "shanghai";
    
    
    //二进制流用 write() 函数写入,
    //之前是文本的读写,使用 << 输出符号, >>插入符号
    // inout >>city;
    // cout << city << endl;
    binaryIo.write(s, 8);
    binaryIo.close();
    cout << "Done" << endl;
    
    

}















