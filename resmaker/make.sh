#!/bin/sh

#  encrypt.sh
#  remaker
#
#  Created by wangmeng on 2018/6/20.
#  Copyright © 2018 cxin. All rights reserved.


function getdir(){
    for element in `ls $1`
    do
        dir_or_file=$1"/"$element
        if [ -d $dir_or_file ]
        then
            getdir $dir_or_file
        else
            ./resmaker $dir_or_file chuxinhudong
            rm -rf $dir_or_file
        fi
    done
}
getdir $1
