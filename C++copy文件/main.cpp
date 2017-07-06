//
//  main.cpp
//  C++copy文件
//
//  Created by Mac on 2017/7/6.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include <iostream>
#include <istream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[])
{
    
    const int FILE_NAME_SIZE = 40;
    
    
    cout << "请输入inputFile Name" << endl;
    char inputFileName[FILE_NAME_SIZE];
    cin >> inputFileName;

    
    
    
    cout << "请输入outputFile Name" << endl;
    char outputFileName[FILE_NAME_SIZE];
    cin >> outputFileName;
    ///Users/i2p/Desktop/testC++/test.txt
 
    
    ifstream input;
    ofstream output;
    
    //open file
    input.open(inputFileName);
    output.open(outputFileName);
    
    if (input.fail())
    {
        cout << "文件不存在" <<endl;
        return 0;
    }
    
    while (!input.eof()) //如果没有读完文件
    {
        output.put(input.get());
        
    }
    
    input.close();
    output.close();
    
    cout << "copy 结束" <<endl;

    
    
    
    
    return 0;
}
