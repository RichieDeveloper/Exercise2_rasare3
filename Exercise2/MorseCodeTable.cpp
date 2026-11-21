/**
* @file MorseCodeTable.cpp
* @author Richie
* @date 2026-11-07
* @brief Implements the MorseCodeTable class.
*/

#include "MorseCodeTable.h"
#include <cctype> // For toupper function



/**
 * @brief Converts an English letter into its Morse Code equivalent.
 * @param letter The English letter to convert.
 * @return The Morse Code sequence, or an empty string if invalid.
 */
string MorseCodeTable::getMorseCode(char letter)   // visual studio auto generated this part of the code when i started typing the function, so i just left it in because that's exactly how i wanted it.
{
	switch (toupper(letter)) {
	case 'A': return ".-";
	case 'B': return "-...";
	case 'C': return "-.-.";
	case 'D': return "-..";
	case 'E': return ".";
	case 'F': return "..-.";
	case 'G': return "--.";
	case 'H': return "....";
	case 'I': return "..";
	case 'J': return ".---";
	case 'K': return "-.-";
	case 'L': return ".-..";
	case 'M': return "--";
	case 'N': return "-.";
	case 'O': return "---";
	case 'P': return ".--.";
	case 'Q': return "--.-";
	case 'R': return ".-.";
	case 'S': return "...";
	case 'T': return "-";
	case 'U': return "..-";
	case 'V': return "...-";
	case 'W': return ".--";
	case 'X': return "-..-";
	case 'Y': return "-.--";
	case 'Z': return "--..";
	default:  return ""; // Return empty string for non-alphabetic characters
	}
}

/**
*@brief Converts a Morse Code sequence into an English letter.
* @param morseCode The Morse Code sequence to convert.
* @return The English letter, or '?' if no match is found.
*/
	char MorseCodeTable::getEnglishLetter(const string & morseCode) 
	{ 
		for (char letter = 'A'; letter <= 'Z'; ++letter)
		{
			if (getMorseCode(letter) == morseCode)
			{
				return letter;
			}
		}
		return '?';
}