//
//  Student.hpp
//  C++中的类
//
//  Created by Mac on 2017/7/7.
//  Copyright © 2017年 Mac. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
#include <string>
using namespace std;
class Student
{
    
private:
    string firstName_;
    string lastName_;
    double score_;

public:
    Student();
    Student(string, string, double);
    
    string getFirstName();
    string getLastName();
    double getScore();

    


};

#endif /* Student_hpp */
