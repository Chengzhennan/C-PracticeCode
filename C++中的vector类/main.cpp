//
//  main.cpp
//  C++中的vector类
//
//  Created by Cheng on 2017/6/18.
//  Copyright © 2017年 Cheng. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {

    vector<int> intVector;
    vector<string> stringVector;
    stringVector.push_back("abc");
    stringVector.push_back("cde");
    stringVector.push_back("efg");
    
    vector<string> v2;
    
    v2.swap(stringVector);
    v2[0] = "jiaohuan";

    for (int i = 0; i < 3; i++) {
        
        cout << v2.at(i) << endl;
        
    }
    
    
    
    
    for (int i = 0; i < 10; i ++) {
        
        intVector.push_back(i + 1);
    }
    
    cout << intVector[4] << endl;
    
    
    
    
    
    
    return 0;
}
