//
//  CSample.hpp
//  trainingcpp
//
//  Created by 田中雅也 on 2020/09/28.
//  Copyright © 2020 田中雅也. All rights reserved.
//

#ifndef CSample_hpp
#define CSample_hpp

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class CSample{
public:
    CSample();  //コンストラクタ
    virtual ~CSample(); //デストラクタ
    void setValue(int x, int y);
    int getX();
    int getY();
protected:
    int m_x;
    int m_y;
    void init();
};

#endif /* CSample_hpp */
