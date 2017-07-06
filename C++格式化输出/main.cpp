//
//  main.cpp
//  C++格式化输出
//
//  Created by Mac on 2017/7/5.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;



void creatFile()
{
    
    ofstream output;
    
    //创建文件
    output.open("/Users/i2p/Desktop/testC++/test.txt");
    
    //    //写数据
    //setw() 设置域宽
    output << setw(6) << "Jhon" << setw(2) << "T" << setw(6) <<  90 <<endl;
    
    output << setw(6) << "Jerry" << setw(2) << "F" << setw(6) <<  60 <<endl;
    
    output.close();
    cout << "done" <<endl;
    
    
    
}

int readFile()
{

    //创建读取文件
    ifstream input;
    
    input.open("/Users/i2p/Desktop/testC++/test.txt");
    
    if(input.fail())
    {
        cout << "打开失败" <<endl;
        return 0;
    }
    
    char city[40];
    
    //如果不到文件的结束
    while (!input.eof())
    {
        //第一参数: 把信息读到什么地方
        //第二参数: 读多少信息
        //第三: 以什么为分隔符
        
        //xcode 中不能调用 getline,get 带参数函数 暂时不知道原因
//        input.getline(city, 40, "#");
        
        
   
        
    }
    
    input.close();
    
    cout << "Done" <<endl;
    
    
    
    
    
    
    return 1;
    
    
    
    



}




int main(int argc, const char * argv[])
{

    creatFile();
    
    //读取文件
    
    


    
    
    
    
    
    
    
    
    
    
    
    return 0;
}

//

















