/**
* @file MorseTranslator.h
* @author Richie
* @date 2026-11-07
* @brief Declares the MorseTranslator class.
*/

#ifndef MORSE_TRANSLATOR_H
#define MORSE_TRANSLATOR_H 


#include <string>
#include "MorseCodeTable.h"

using namespace std;


/**
* @class MorseTranslator
* @brief Translates English sentences to Morse Code.
*/
class MorseTranslator {

private:
    MorseCodeTable morseCodeTable;


public:

	/**
    * @brief Translates an English sentence to Morse Code.
    * @param sentence The English sentence to translate.
    * @return The sentence translated into Morse Code.
    */
    string translateToMorse(const string& sentence);
};

#endif // MORSE_TRANSLATOR_H