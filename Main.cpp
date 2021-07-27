// Main function
#include <iomanip>
#include"Decryptor.h"
using namespace std;
void main()
{
	char choice;
	input i;
	file f;
	encryptor e;
	scrambler h;
	decryptor d;
	// Setting the position of the first message
	cout << setw(70);
	cout << "ASCII Encryptor & Decryptor" << endl;
	cout << endl;
	// Giving user a choice
	cout << "Press V to view the content of the file OR Press E to Encrypt: ";
	cin >> choice;
	cout << endl;
	// Encrypting & Decrypting  
	if (choice == 'E' || choice == 'e')
	{
		cin.ignore();
		cout << "Enter the sentence or word you want to encrypt in the ASCII code: " << endl;
		// Writing user's input in the text file
		f.writer();
		// Displaying the ASCII code of the user's input
		cout << "ASCII code of the input: " << endl;
		cout << endl;
		e.encrypting();
		cout << endl;
		// Displaying the Encrypted input
		cout << "\nEncrypted Input: " << endl;
		h.scrambling();
		cout << endl;
		cout << endl;
		// Displaying the Decrypted input
		cout << "Decrypted Input: " << endl;
		d.decrypting();
	}
	// Displaying the Original  String stored in the file at the current moment
	else if (choice == 'V' || choice == 'v')
	{
		cout << "Original  String: ";
		cout<<f.reader();
	}
	_getch();

}
    
	
