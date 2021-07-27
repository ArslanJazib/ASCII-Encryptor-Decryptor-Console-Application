// File header file
#pragma once
#include"Input.h"
class file:public input
{
protected:
	ifstream ot;
	ofstream in;
public:
	void createfile();
	void writer();
	void write(string s);
	string reader();
	string read();
};
