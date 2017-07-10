//
//  Student.cpp
//  C++中的类
//
//  Created by Mac on 2017/7/7.
//  Copyright © 2017年 Mac. All rights reserved.
//

#include "Student.hpp"

Student::Student()
{
}

Student::Student(string firstName, string lastName, double score)
{
    
    this->firstName_ = firstName;
    this->lastName_ = lastName;
    this->score_ = score;
    


}

string Student::getLastName()
{
    return this->lastName_;
}

string Student::getFirstName()
{
    return this->firstName_;
}


double Student::getScore()
{
    return this->score_;
}
