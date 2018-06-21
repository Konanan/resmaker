//
//  res_maker.cpp
//  resmaker
//
//  Created by wangmeng on 2018/6/21.
//  Copyright © 2018 cxin. All rights reserved.
//

#include "res_maker.h"
res_maker::res_maker()
{
    
}

res_maker::~res_maker()
{
    
}

void res_maker::encrypt(const char* name, const char* sign)
{
    file f;
    unsigned long len;
    unsigned long signlen = strlen(sign);
    unsigned char* cont = f.read(name, "rb", &len);
    for (unsigned long i=0; i<len; i++) {
        cont[i] = cont[i] ^ sign[i%signlen];
    }
    
    f.write(cont, rename(name), "wb", len);
    delete [] cont;
}

const char* res_maker::rename(const char* path)
{
    size_t split_pos = -1;
    string file_name(path);
    split_pos = file_name.find_last_of("/");
    
    char *enpath = new char[128];
    memset(enpath, 0, 128);
    strcpy(enpath, path);
    int pos = 0;
    char ch = enpath[pos];
    while ('.' != ch) {
        if(pos <= split_pos){
            pos++;
            continue;
        }
        ch = ch + 1;
        if(ch > 125 || ch < 21){
            ch = 'a';
        }
        enpath[pos++] = ch;
        ch = enpath[pos];
    }
    return (const char*)enpath;
}
