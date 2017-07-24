//
//  main.cpp
//  C++泛型排序
//
//  Created by Cheng on 2017/7/22.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include <iostream>

using namespace std;

template < typename T>
void selectionSort(T[], int);
template < typename T>
void printArr(T list[], int arrSize);




int main(int argc, const char * argv[])
{
    
    double list[] = {1.0, 2.0, 45.112, 0.3, 6.5};
    selectionSort(list, 5);
    printArr(list, 5);
    
    string list2[] = {"beijing", "shanging", "shenzhening", "guangng", "dsfaing"};
    selectionSort(list2, 5);
    printArr(list2, 5);
    
    
    
    
    return 0;
}

template < typename T>
void selectionSort(T list[], int arraSize)
{
    for (int i = arraSize - 1; i > 0; --i)
    {
        //找出最大元素
        T currentMax = list[0];
        int maxIndex = 0;
        for (int j = 1; j <= i; ++j)
        {
            if (currentMax < list[j])
            {
                currentMax = list[j];
                maxIndex = j;
            }
        }
        
        //调换最大的和最后一个的位置, 让最大值排到最后
        if (maxIndex != i)
        {
            list[maxIndex] = list[i];
            list[i] = currentMax;
        }
        
    }
    
}

template <typename T>
void printArr(T list[], int arrSize)
{
    for (int i = 0; i < arrSize; ++i)
    {
        cout << list[i] << " " ;
    }
    cout <<endl;
    
}












