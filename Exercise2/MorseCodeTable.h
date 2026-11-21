/*
* @file MorseCodeTable.h
* @author Richie
* @date 2026-11-07
* @brief Declares the MorseCodeTable class.
*/

#ifndef MORSE_CODE_TABLE_H
#define MORSE_CODE_TABLE_H

#include <string>
using namespace std;

/*
* @class MorseCodeTable
* @brief provides Morse Code equivalents for English letters.
*/
class MorseCodeTable {
public:
	/**
	*
	* @brief Gets the Morse Code equivalent for a given English letter.
	* @param letter The English letter to translate.
	* @return The corresponding Morse Code symbol.
	*/
	string getMorseCode(char letter);

/**
 * @brief Gets the English letter represented by a Morse Code sequence.
 * @param morseCode The Morse Code sequence to translate.
 * @return The corresponding English letter, or '?' if invalid.
 */
	char getEnglishLetter(const string& morseCode);
};

#endif // MORSE_CODE_TABLE_H