#pragma once
#include <iostream>
class file
{
public:
	static unsigned char* read(const char* path, const char* mode, unsigned long * len);
	static bool write(unsigned char* data,const char *path, const char* mode, unsigned long len);
};

