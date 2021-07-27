// Decryptor header file
#pragma once
#include"Encryptor.h"
#include"File.h"
#include"Scrambler.h"
class decryptor :public encryptor
{
protected:
	string temp1;
	file t1;
public:
	void decrypting();
};