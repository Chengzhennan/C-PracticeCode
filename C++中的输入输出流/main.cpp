//
//  main.cpp
//  C++中的输入输出流
//
//  Created by Cheng on 2017/7/2.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    //创建一个ofstrem 对象
//    ofstream output;
    
    //创建一个文件
//    output.open("test.txt");
    
    //mac上需要添加绝对路径
    ofstream output("/Users/cheng/Desktop/file/test2.txt",ios::out);
    
    //输入文字
    output << "John" << " " << "score" << " " << 10 << " "<<endl;
    
    //必须显示调用close()
    output.close();
    
    cout << "Done"<<endl;
    
    
    return 0;
}
