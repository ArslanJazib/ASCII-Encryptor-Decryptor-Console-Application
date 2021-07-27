// Encryptor's Implementation file
#include"Encryptor.h"
void encryptor::encrypting()
{
	// Storing the user's input in a string
	temp = t.reader();
	// Storing the length of user's input in a integer
	size = temp.length();
	// Creating a 1-D Array Dynamically
	int *arr= new int[size];
	arr[size];
	// Displaying the ASCII code of the user's input 
	for (int loop1 = 0; loop1 < size; loop1++)
	{
		arr[loop1] = (int)temp[loop1];
		cout << "\t"<<arr[loop1];
	}
}