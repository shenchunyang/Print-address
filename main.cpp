//
//  main.cpp
//  Print address
//
//  Created by ry耷拉拉星球 on 15/12/9.
//  Copyright (c) 2015年 ry耷拉拉星球. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a=1;
    int *p;
    p=&a;
    printf("%d %d %x %x",a,p,&a,&p);
    return 0;
}