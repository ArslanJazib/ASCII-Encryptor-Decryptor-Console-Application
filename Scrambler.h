// Scrambler header file
#pragma once
#include"Encryptor.h"
#include"File.h"
#include<cctype>
class scrambler:public encryptor
{
protected:
	string scrambled;
public:
	void scrambling();

};