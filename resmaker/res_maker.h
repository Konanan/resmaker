//
//  res_maker.hpp
//  resmaker
//
//  Created by wangmeng on 2018/6/21.
//  Copyright © 2018 cxin. All rights reserved.
//

#ifndef res_maker_hpp
#define res_maker_hpp

#include <stdio.h>
#include <iostream>
#include "file.h"
using namespace std;

class res_maker
{
public:
    res_maker();
    ~res_maker();
    void encrypt(const char* name, const char* key);
    const char* rename(const char* path);
};

#endif /* res_maker_hpp */
