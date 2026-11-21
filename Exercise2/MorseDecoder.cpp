/**
* @file MorseDecoder.cpp
* @author Richie
* date 2026-11-07
* @brief Implements the MorseDecoder class.
*/


#include "MorseDecoder.h"


using namespace std;


/**
 * @brief Translates Morse Code into an English sentence.
 * @param morseCode The Morse Code to translate.
 * @return The decoded English sentence.
 */
string MorseDecoder::translateToEnglish(const string& morseCode)
{
    string englishTranslation;
    string currentCode;

    for (int i = 0; i < morseCode.length(); i++)
    {
        char symbol = morseCode[i];

        if (symbol == '.' || symbol == '-')
        {
            currentCode += symbol;
        }
        else if (symbol == ' ')
        {
            if (!currentCode.empty())
            {
                englishTranslation += morseCodeTable.getEnglishLetter(currentCode);
                currentCode.clear();
            }

            int spaces = 1;

            while (i + 1 < morseCode.length() && morseCode[i + 1] == ' ')
            {
                spaces++;
                i++;
            }

            if (spaces >= 3 && !englishTranslation.empty())
            {
                englishTranslation += " ";
            }
        }
    }

    if (!currentCode.empty())
    {
        englishTranslation += morseCodeTable.getEnglishLetter(currentCode);
    }

    return englishTranslation;
}
