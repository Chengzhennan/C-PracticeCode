//
//  main.cpp
//  C++数组和对象的二进制读写
//
//  Created by Mac on 2017/7/7.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "Student.hpp"
using namespace std;
void binaryArrayInOut();
void binaryObject();
void displayStudent(Student&);

int main(int argc, const char * argv[])
{
//    binaryArrayInOut();
    binaryObject();
    
    
    
    
    
    return 0;
}



//读取会失败,不知为何
void binaryObject()
{
    
    fstream binaryio;
    
    Student student1("zhao", "yun", 20);
    Student student2("zhang", "fei", 30);
    
    binaryio.open("/Users/i2p/Desktop/testC++/obj.dat",ios::out | ios::binary);
    
    binaryio.write(reinterpret_cast<char *>(&student1), sizeof(Student));
    
    binaryio.write(reinterpret_cast<char *>(&student2), sizeof(Student));
    
    
    cout << "写入完毕" <<endl;
    
    //读取对象
    
//    Student studentNew("tyu", "gjdhh", 0);
    Student studentNew;

    
    binaryio.open("/Users/i2p/Desktop/testC++/obj.dat",ios::in | ios::binary);
    
    binaryio.read(reinterpret_cast<char *>(&studentNew), sizeof(Student));
    
    
    cout << studentNew.getScore() <<endl;
    displayStudent(studentNew);
    
    cout <<"---------------------"<<endl;
    binaryio.read(reinterpret_cast<char *>(&studentNew), sizeof(Student));
    
    displayStudent(studentNew);

    binaryio.close();
    
    cout << " 读取完毕"<<endl;
    
    


}

void displayStudent(Student& student)
{

    cout << "firstName="<< student.getFirstName() <<endl;
    cout << "lastName="<< student.getLastName() <<endl;
    cout << "score="<< student.getScore() <<endl;


}


void binaryArrayInOut()
{
    const int SIZE = 5;
    fstream binaryio;
    
    //1.写入数组
    double array[SIZE] = {1.2, 2.5, 5.6, 9.2, 6.0};
    
    binaryio.open("/Users/i2p/Desktop/testC++/array.dat",ios::out | ios::binary);
    //字节数 40
    cout << sizeof(array)<<endl;
    //这里传递 array 和 &array 一样,都表示数组的地址
    binaryio.write(reinterpret_cast<char *>(array), sizeof(array));
    cout << "Done"<<endl;
    binaryio.close();
    
    
    
    //2.读取数组
    binaryio.open("/Users/i2p/Desktop/testC++/array.dat", ios::in | ios::binary);
    
    double readArray[SIZE] = {};
    
    binaryio.read(reinterpret_cast<char *>(readArray), sizeof(readArray));
    
    for (int i = 0; i < SIZE; i++)
    {
        cout << readArray[i] << endl;
        
    }
    binaryio.close();
    
    

}


















