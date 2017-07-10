//
//  main.cpp
//  C/C++char类型
//
//  Created by Mac on 2017/7/7.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {

    //相当于一个 string
//    char *s = "hello";
    
    //测试结果,两种方式定义都一样
    char s1[10] = "world";
    
    char s2[10] = {"world"};
    
//    cout << s <<" "<< s1[4] << " " << s2[4] <<endl;
    
    
    
    return 0;
}
