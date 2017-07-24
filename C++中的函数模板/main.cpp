//
//  main.cpp
//  C++中的函数模板
//
//  Created by Cheng on 2017/7/22.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include <iostream>
using namespace std;
//参数使用大写单个字母
template <typename T, typename S>
T maxValue(T x, S y)
{
    //为了保证能比较采用类型转换
    
    T x1 = static_cast<T>(y);
    if (x > x1)
    {
        return x;
    }
    else
    {
        return x1;
    }
        
        
        
}




int main(int argc, const char * argv[])
{
    
    cout << "最大的值是"<< maxValue(5, 3.0)<<endl;
    cout << "最大的值是" <<maxValue('a', 5.0) <<endl;
//    cout << "最大的值是" <<maxValue("a", 5.0) <<endl;
    
    // "a" 属于char* 类型  'a' 是char 类型   char 可以转换成int 但是char* 能通过static cast转换
    
    
    
    
    
    
    
    
    return 0;
}
