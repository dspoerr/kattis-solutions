#include <iostream>
#include <string>

int main()
{
    std::string hangmanWord;
    std::string alphabetPermutation;

    int components = 10;
    bool wrongLetter;

    std::cin >> hangmanWord;
    std::cin >> alphabetPermutation;

    int wordLength = hangmanWord.length();
    int correctLetters = 0;

    /* cycles through the hangman word for each letter of the permutation
       max of 26 iterations through in worst case. 
       Is removing letters from hangmanWord slightly faster? */
    for (auto& ch : alphabetPermutation)
    {
        wrongLetter = true;
        for (auto& letter : hangmanWord)
        {
            if (letter == ch)
            {
                wrongLetter = false;
                correctLetters++;
            }
        }

        if (wrongLetter == true)
        {
            components--;
        }
        else
        {
            if (correctLetters == wordLength)
            {
                std::cout << "WIN\n";
                return 0;
            }
        }

        if (components == 0)
        {
            std::cout << "LOSE\n";
            return 0;
        }
    }    
}

