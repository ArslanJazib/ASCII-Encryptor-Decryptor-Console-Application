// Scrambler's Implementation file
#include"Scrambler.h"
void scrambler::scrambling()
{
	// Storing the user's input in a string
	temp = t.reader();
	// Storing the length of user's input a integer
	size = temp.length();
	// Creating a 1-D Array Dynamically
	int *arr2 = new int[size];
	arr2[size];
	// Storing the user's input in a string
	scrambled = temp;
	// Encrypting  user's input using an altered form of a Caesar Cipher Algorithm
	for (int loop2 = 0; temp[loop2] != '\0'; loop2++)
	{
		// Converting the user's input in lower-case letters
		arr2[loop2] = tolower(temp[loop2]);
		// For lower case letters in the user's input
		if (arr2[loop2] >= 'a' && arr2[loop2] <= 'z')
		{
			arr2[loop2] = arr2[loop2] + size;

			if (arr2[loop2] > 'z')
			{
				arr2[loop2] = arr2[loop2] - 'z' + 'a' - 1;
			}

			temp[loop2] = arr2[loop2];
		}
		// For Upper case letters in the user's input
		else if (arr2[loop2] >= 'A' && arr2[loop2] <= 'Z')
		{
			arr2[loop2] = arr2[loop2] + size;

			if (arr2[loop2] > 'Z')
			{
				arr2[loop2] = arr2[loop2] - 'Z' + 'A' - 1;
			}

			temp[loop2] = arr2[loop2];
		}
	}
	// Displaying the Encrypted form of user's input
	for (int loop3 = 0; loop3 < size; loop3++)
	{
		cout << (char)arr2[loop3];
		scrambled[loop3] = (char)arr2[loop3];
	}
	// Writing the Encrypted form of user's input in the temporary text file
	t.write(scrambled);
	
}