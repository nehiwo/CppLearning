//
//  subCSample.hpp
//  trainingcpp
//
//  Created by 田中雅也 on 2020/09/28.
//  Copyright © 2020 田中雅也. All rights reserved.
//

#ifndef subCSample_hpp
#define subCSample_hpp

#include "CSample.hpp"

class subCSample : public CSample{
public:
    void resetPosition();
    void resetPosition(int x, int y);
    void movePosition(int dx, int dy);
    void init();
};

#endif /* subCSample_hpp */
