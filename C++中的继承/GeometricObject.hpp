//
//  GeometricObject.hpp
//  C++中的继承
//
//  Created by Mac on 2017/6/19.
//  Copyright © 2017年 Mac. All rights reserved.
//

#ifndef GeometricObject_hpp
#define GeometricObject_hpp

#include <stdio.h>
#include <string>
using namespace std;
class GeometricObject {
    
    
    
public:
    GeometricObject();
    GeometricObject(string color, bool filled);
    
    void setFilled(bool);
    bool isFilled();
    
    void setColor(string);
    string getColor();
    
    //打印类的信息
    string toString();
    
private:
    string color_;
    bool filled_;
    
    
};



#endif /* GeometricObject_hpp */
