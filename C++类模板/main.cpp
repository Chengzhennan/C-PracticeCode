//
//  main.cpp
//  C++类模板
//
//  Created by Cheng on 2017/7/26.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include <iostream>
using namespace std;

//模板类
template <typename T>
class Stack
{
private:
    T element[100];
    int size;
    
public:
    Stack();
    bool empty();
    T peek();
    T push(T value);
    T pop();
    int getSize();
    
};

template <typename T>
Stack<T>::Stack()
{
    size = 0;
}

template <typename T>
bool Stack<T>::empty()
{
    return size == 0;
}

template <typename T>
T Stack<T>::peek()
{
    return  element[size - 1];
}

template <typename T>
T Stack<T>::push(T value)
{
    return element[size++] = value;
}

template <typename T>
T Stack<T>::pop()
{
    return element[--size];
}

template <typename T>
int Stack<T>::getSize()
{
    return size;
}




int main(int argc, const char * argv[])
{
//    Stack<int> 是类模板Stack<>的一个实例,
//    编译器将其处理后得到一个类,我们称之为Stack<>的 "实例类"(重要概念)
//    intStack则是这个实例类的一个实例,即是对象
    Stack<int> intStack;
    
    intStack.push(1);
    cout << intStack.peek()<<endl;
    
    Stack<string> stringStack;
    stringStack.push("我是string");
    cout << stringStack.peek() << endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
    
    
    
    
}


//普通类声明
/*
class Stack
{
private:
    int element[100];
    int size;
    
public:
    Stack();
    bool empty();
    int peek();
    int push(int value);
    int pop();
    int getSize();
    
};

Stack::Stack()
{
    size = 0;
}

bool Stack::empty()
{
    return size == 0;
}

int Stack::peek()
{
    return  element[size - 1];
}

int Stack::push(int value)
{
    return element[size++] = value;
}

int Stack::pop()
{
    return element[--size];
}

int Stack::getSize()
{
    return size;
}
*/



