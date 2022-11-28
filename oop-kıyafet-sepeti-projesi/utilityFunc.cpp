#include "utilityFunc.h"

char* Utility::stringToChar(string str)
{
	char* chr = new char[str.length()];
	for (int i = 0; i < str.length(); i++)
	{
		chr[i] = str[i];
	}
	chr[str.length()] = '\0';

	// char*'lar c-type stringlerdir. 
	// stringler '\0' karakterine sahiptir ki bellek nereye kadar okuyaca��n� bilsin, \0 g�r�nce okumay� b�rak�r
	// char * sonuna \0 ekleyince art�k garbage valuelar okunmuyor ger�ek bir string'e d�n���yor.

	return chr;
}

string Utility::charToString(char* chr)
{
	string str;
	str = chr;
	return str;
}

int Utility::TxtlineCount(string txtName)
{
	ifstream read;
	string line;
	int numberOfLines = 0;

	read.open(txtName, ios::app);

	if (read.is_open())
	{
		while (!(read.eof()))
		{
			getline(read, line);
			numberOfLines++;
		}
	}
	read.close();
	return numberOfLines;
}

string* Utility:: getTxtContent(string txtName, int txtLineCount) 
{
	ifstream read;
	string line;
	string* txtLines = new string[txtLineCount + 1];  
	int i = 0;

	read.open(txtName, ios::app);

	if (read.is_open())
	{
		for (int i = 0; i < txtLineCount; i++)
		{
			getline(read, line);
			txtLines[i] = line;
		}
	}
	read.close();
	return txtLines;
}


// vector <string*> splitListItems(string[]);
