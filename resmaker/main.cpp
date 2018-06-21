//
//  main.cpp
//  logrunner
//
//  Created by wangmeng on 2018/5/17.
//  Copyright © 2018年 cxin. All rights reserved.
//

#include <iostream>
#include "res_maker.h"

int main(int argc, const char * argv[]) {
    
    if(argc <= 2){
        printf("cannot find file path and signkey.\n");
        return 0;
    }
    printf("path:%s\nkey:%s\n",argv[1],argv[2]);
    
    res_maker rm;
    rm.encrypt(argv[1], argv[2]);
    return 0;
}
