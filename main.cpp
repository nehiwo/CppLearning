//
//  main.cpp
//  trainingcpp
//
//  Created by 田中雅也 on 2020/09/28.
//  Copyright © 2020 田中雅也. All rights reserved.
//

#include <iostream>
#include "subCSample.hpp"

using namespace std;

int main(int argc, char ** args) {
    subCSample p;
    int x = 0;
    int y = 0;
    int dx = 0;
    int dy = 0;
    cin >> x >> y;
    cin >> dx >> dy;
    p.setValue(x, y);
    p.movePosition(dx, dy);
    cout << p.getX() << "," << p.getY() << endl;
    p.resetPosition();
    cout << p.getX() << "," << p.getY() << endl;
    p.resetPosition(x, y);
    cout << p.getX() << "," << p.getY() << endl;
    return 0;
}
