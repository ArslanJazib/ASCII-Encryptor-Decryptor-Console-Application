// File's Implementation file
#include"File.h"
void file:: createfile()
{
		in.open("File.txt");
		in.close();
}
// Writing user's input in the file
void file::writer()
{
	in.open("File.txt");
	getline(cin, st);
	in << st;
	in.close();
	cout << endl;
}
// Reading user's input from the file
string file::reader()
{
	ot.open("File.txt");
	getline(ot, st);
	return st;
}
// Writing the encrypted input in a temporary text file
void file::write(string s)
{
	in.open("tempFile.txt");
	in << s;
	in.close();
}
// Reading the encrypted input from the temporary file
string file::read()
{
	ot.open("tempFile.txt");
	getline(ot, st);
	return st;
}
