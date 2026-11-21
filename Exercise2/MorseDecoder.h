
/**
 * @file MorseDecoder.h
 * @author Richie
 * @date 2026-11-07
 * @brief Declares the MorseDecoder class.
 */
#ifndef MORSE_DECODER_H
#define MORSE_DECODER_H

#include "MorseCodeTable.h"
#include <string>

using namespace std;


/**
*@class MorseDecoder
* @brief Translates Morse Code into English
*/
class MorseDecoder {

private:
    MorseCodeTable morseCodeTable;

public:
    /**
     * @brief Translates a string of Morse code into an English sentence.
     * @param morseCode The Morse code to translate.
     * @return The decoded English sentence.
     */
    string translateToEnglish(const string& morseCode);

};

#endif // MORSE_DECODER_H