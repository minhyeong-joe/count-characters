// Minhyeong Joe
// Homework3: Count Char Types in a Sentence
// Date Due: 13 April, 2016
// Visual Studio 2013
// The program prompts the user to enter sentence up to 132 characters long,
// then it will count the total number of characters and number of occurrences of
// letters and numbers in the sentence.
// The program will repeat until the user (Q)uits the program.

#include <iostream>
using namespace std;
#include "HW3_CharCount_VS2013.h"

int main()
{
	char ch, inbuf[132], loop = 'y';
	unsigned short CharCount = 0;
	do
	{
		cout << "********Main Menu*********" << endl << endl << "(E)nter the sentence to process" << endl
			<< "(C)ount the letters and then display them" << endl << "(Q)uit the program" << endl;
		cin.get(ch);
		cin.ignore(20, '\n');
		switch (toupper(ch))
		{
		case'E':
		{
				   CharCount = Input(inbuf, sizeof(inbuf));
				   if (CharCount == 0)
					   cout << endl << "No characters have been entered!";
				   else
					   cout << endl << "sentence has been entered!";
				   cin.get();
				   system("cls");
				   break;
		}
		case'C':
		{
				   if (CharCount == 0)
				   {
					   cout << "You must enter the sentence first (Press Enter to continue)";
					   cin.get();
					   system("cls");
				   }
				   else
				   {
					   cout << endl;
					   CountAndDisplay(inbuf, CharCount);
					   cout << "Press Enter to continue...";
					   cin.get();
					   system("cls");
				   }
				   break;
		}
		case'Q':
		{
				   loop = 'n';
				   break;
		}
		default:
			cout << "Invalid input. Please try again.(Press Enter to continue)";
			cin.get();
			system("cls");
		}
	} while (loop == 'y');
	cout << "Press any key to Continue...";
	getchar();
	return 0;
}

int Input(char *inbuf, short size)
{
	unsigned short CharCount;
	unsigned short spaceCount = 0;
	cout << "Please enter a sentence (132 characters maximum):\n";
	cin.getline(inbuf, size);
	for (int i = 0; i < cin.gcount() - 1;i++) {
		if (inbuf[i] == ' ') {
			spaceCount++;
		}
	}
	CharCount = cin.gcount() - 1 - spaceCount;         // "-1" is to cancel out the enter key count
	return (CharCount);
}
void CountAndDisplay(char *inbuf, short CharCount)
{
	short Count[132];
	for (int i = 0; i < 132; i++)
	{
		Count[i] = 0;
	}
	for (int j = 0; j <= CharCount; j++)
	{
		Count[inbuf[j]]++;
	}
	cout << "Your input sentence is" << endl << inbuf << endl << endl;
	cout << "Your sentence has " << CharCount << " Characters.\n\n"
		 << "Lowercase letters\nLetter\tOccurrences\n";
	for (int k = 97; k <= 122; k++)
	{
		if (Count[k] != 0)
			cout << "   " << (char)k << "  -      " << Count[k] << endl;
	}
	cout << endl << "Uppercase letters\nLetter\tOccurrences\n";
	for (int l = 65; l <= 90; l++)
	{
		if (Count[l] != 0)
			cout << "   " << (char)l << "  -      " << Count[l] << endl;
	}
	cout << endl << "Numbers\nNumber\tOccurrences\n";
	for (int m = 48; m <= 57; m++)
	{
		if (Count[m] != 0)
			cout << "   " << (char)m << "  -      " << Count[m] << endl;
	}
	cout << endl;
}
