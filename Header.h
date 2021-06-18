//
//  Header.h
//  trainingcpp
//
//  Created by 田中雅也 on 2020/09/28.
//  Copyright © 2020 田中雅也. All rights reserved.
//

#ifndef Header_h
#define Header_h

#include <iostream>
#include <string>

using namespace std;

class CSample{
public:
    void setString1(string str);
    void setString2(string str);
    string getString1();
    string getString2();
    string getConnectedString();
    int getConnectedLength();
private:
    string m_str1;
    string m_str2;
};

#endif /* Header_h */
