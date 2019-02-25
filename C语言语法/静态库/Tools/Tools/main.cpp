//
//  main.cpp
//  Tools
//
//  Created by 陆敏 on 2019/1/18.
//  Copyright © 2019 陆敏. All rights reserved.
//

#include <iostream>
#include "LibTools.hpp"
int main(int argc, const char * argv[]) {
    int p = Plus(10, 20);
    int s = Sub(20, 10);
    int m = Mul(10, 2);
    int d = Div(20, 5);
    printf("p = %d s = %d m = %d d = %d\n",p,s,m,d);
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
