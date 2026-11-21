/**
* @file: MorseTranslator.cpp
* @author: RIchie
* @date: 2026-11-07
* @brief Implements the MoresTranslator class.
*/


#include "MorseTranslator.h"


/**
 * @brief Translates an English sentence into Morse Code.
 * @param sentence The English sentence to translate.
 * @return The sentence translated into Morse Code.
 */
string MorseTranslator::translateToMorse(const string& sentence)
{

	string morseTranslation;
	bool wordGap = false;

	for (char letter : sentence)
	{

		if (letter == ' ')
		{
			if (!morseTranslation.empty())
			{
				wordGap = true; // Set flag to indicate a word gap
			}
		}
		else
		{
			string morseCode = morseCodeTable.getMorseCode(letter);

			if (!morseCode.empty())
			{
				if (!morseTranslation.empty())
				{
					if (wordGap)
					{
						morseTranslation += "   "; // Add 3 spaces for word gap
					}
					else
					{
						morseTranslation += " "; // Add a space between letters
					}
				}
				morseTranslation += morseCode;
				wordGap = false; // Reset the word gap flag
			}
		}
	}
	return morseTranslation;
}