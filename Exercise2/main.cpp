/**
* @file: main.cpp
* @author: RIchie
* @date: 2026-11-07
* @brief Runs the bidirectional Morse Code translation program.
*/
#include "MorseTranslator.h"
#include <iostream>
#include <string>
#include "MorseDecoder.h"

using namespace std;


/**
 * @brief Runs the Morse Code translator menu.
 * @return 0 when the program exits successfully.
 */
int main()
{
	MorseTranslator translator;
	MorseDecoder decoder;
	string sentence;
	int menuChoice;
	int numberOfSentences = 0;

	do
	{
		cout << "\n--- Morse Code Translator ---" << endl;
		cout << "1. English to Morse Code" << endl;
		cout << "2. Morse Code to English" << endl;
		cout << "3. Exit" << endl;
		cout << "Choose an option: ";

		cin >> menuChoice;
		cin.ignore();

		if (menuChoice == 1 || menuChoice == 2)
		{
			cout << "How many sentences would you like to translate? ";
			cin >> numberOfSentences;
			cin.ignore();

			while (numberOfSentences <= 0)
			{
				cout << "Please enter a number greater than 0: ";
				cin >> numberOfSentences;
				cin.ignore();
			}
		}
		else if (menuChoice != 3)
		{
			cout << "Invalid choice. Please try again." << endl;
		}

		for (int i = 0; (menuChoice == 1 || menuChoice == 2) && i < numberOfSentences; i++)
		{
			if (menuChoice == 1)
			{
				cout << "Enter an English sentence: ";
			}
			else
			{
				cout << "Enter Morse Code: ";
			}
			getline(cin, sentence);


			if (menuChoice == 1 && sentence.length() > 50)
			{
				cout << "Your sentence is too long. Please enter a sentence with 50 characters or fewer." << endl;
			}

			else if (menuChoice == 1)
			{
				cout << "Morse Code: " << translator.translateToMorse(sentence) << endl;
			}
			else if (menuChoice == 2)
			{
				cout << "English: " << decoder.translateToEnglish(sentence) << endl;
			}
		}

	} while (menuChoice != 3);
	cout << "Goodbye!" << endl;


	return 0;
}