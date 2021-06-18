//
//  subCSample.cpp
//  trainingcpp
//
//  Created by 田中雅也 on 2020/09/28.
//  Copyright © 2020 田中雅也. All rights reserved.
//

#include "subCSample.hpp"

void subCSample::resetPosition(){
    init();
}

void subCSample::resetPosition(int x, int y){
    m_x = x;
    m_y = y;
}

void subCSample::movePosition(int dx, int dy){
    m_x += dx;
    m_y += dy;
}

void subCSample::init(){
    m_x = 1;
    m_y = 1;
}
