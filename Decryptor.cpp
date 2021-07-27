// Decrytor's Implementation file
#include"Decryptor.h"
void decryptor::decrypting()
{
	// Storing the Encrypted form of user's input in a string
	temp1 = t1.reader();
	// Storing the user's input in a string
	temp = t.read();
	// Storing the length of user's input in a integer
	size = temp.length();
	// Creating a 1-D Array Dynamically
	int *arr3 = new int[size];
	arr3[size];
	// Creating a 1-D Array Dynamically
	int *arr4 = new int[size];
	arr4[size];
	// Decrypting encrypted value using an altered form of a Caesar Cipher Algorithm
	for (int loop5 = 0; temp[loop5] != '\0'; loop5++) 
	{
		arr4[loop5] = temp[loop5];
		// For lower case letters in the user's input
		if (arr4[loop5] >= 'a' && arr4[loop5] <= 'z')
		{
			arr4[loop5] = arr4[loop5] - size;

			if (arr4[loop5] < 'a')
			{
				arr4[loop5] = arr4[loop5] + 'z' - 'a' + 1;
			}

			temp[loop5] = arr4[loop5];
		}
		// For Upper case letters in the user's input
		else if (arr4[loop5] >= 'A' && arr4[loop5] <= 'Z')
		{
			arr4[loop5] = arr4[loop5] - size;

			if (arr4[loop5] > 'a') 
			{
				arr4[loop5] = arr4[loop5] + 'Z' - 'A' + 1;
			}

			temp[loop5] = arr4[loop5];
		}
	}
	// Displaying the Encrypted form of user's input
	for (int loop6 = 0; loop6 < size; loop6++)
	{
		// Storing the indexes of the Upper-Case letters from the user's input
		if (isupper(temp1[loop6]) != 0)
		{
			arr3[loop6] = loop6;
		}
		// Converting and displaying the lower-case decrypted alphabets in the original  Upper-Case form
		if (arr3[loop6]==loop6)
		{
			cout << (char)toupper((char)arr4[loop6]);
		}
		// Displaying  the Lower-Case Alphabets
		else
		{
			cout << ((char)arr4[loop6]);
		}
	}
}