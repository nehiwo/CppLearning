//
//  CSample.cpp
//  trainingcpp
//
//  Created by 田中雅也 on 2020/09/28.
//  Copyright © 2020 田中雅也. All rights reserved.
//

#include "CSample.hpp"

CSample::CSample(){
    init();
}

CSample::~CSample(){
}

void CSample::setValue(int x, int y){
    m_x = x;
    m_y = y;
}

void CSample::init(){
    m_x = 0;
    m_y = 0;
}

int CSample::getX(){
    return m_x;
}

int CSample::getY(){
    return m_y;
}
