//
//  main.cpp
//  C++读取文件
//
//  Created by Cheng on 2017/7/2.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    ifstream input;
    
    input.open("/Users/cheng/Desktop/file/test0.txt");
    
    //如果打开文件失败
    if(input.fail())
    {
        cout << "打开文件失败" <<endl;
        return 0;
        
    }
    
    
    
    //创建data 存放读到的数据
    char firstName[80];
    char mi[15];
    char m2;
    int score = 0;
    
    //是否读到了文件的末尾
    while (!input.eof())
    {
        
        input >> firstName >> mi >> m2 >> score;
        cout << firstName << " "<< mi << " " << m2 <<" " << score << endl;
        
    }
    
    input.close();
    
    
    
    
    
    
    return 0;
}
