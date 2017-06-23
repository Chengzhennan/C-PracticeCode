//
//  main.cpp
//  C++中的拷贝构造函数
//
//  Created by Mac on 2017/6/9.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include <iostream>
#include "Date.hpp"
#include "Person.hpp"
using namespace std;

void displayPerson(Person& person1 , Person& person2)
{
    cout << "\t person1_id= "<< person1.getId() << endl;
    cout << "\t person1_birthYear= "<< person1.getBirthDate()->getYear() << endl;
    
    
    cout << "\t person2_id= "<< person2.getId() << endl;
    cout << "\t person2_birthYear= "<< person2.getBirthDate()->getYear() << endl;
}




int main(int argc, const char * argv[]) {
    
    Person person1(11111,2003,2,2);
    Person person2(22222,1992,9,9);
    
    
    displayPerson(person1, person2);
    
    //每个类都有默认的拷贝构造函数
    person1 = Person(person2);
    cout << "person2 拷贝到person1之后" <<endl;
    
    displayPerson(person1, person2);
    
    //改变 person2 的年份
    person2.getBirthDate()->setYear(2010);
    cout << "改变person2年份 之后" <<endl;
    
    //此时 person1 的 Date *指针也指向 person2的 date 了,所以一旦修改了 person2 那么 person1 和 person2 数据都会改变
    displayPerson(person1, person2);
    
    cout << &person2 <<"____" <<&person1<<endl;
    
    
    
    
    
    return 0;
}
