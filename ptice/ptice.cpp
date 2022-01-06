#include <iostream>
#include <string>
#include <limits.h>

int main()
{
    int numOfAnswers, aIndex, bIndex, gIndex;
    int aSum, bSum, gSum;
    int winner;
    std::string answers; 

    std::cin >> numOfAnswers;
    std::cin >> answers;

    aIndex = 0;
    bIndex = 0;
    gIndex = 0;
    aSum = 0;
    bSum = 0;
    gSum = 0;
    for (auto& ch : answers)
    {
        /*Adrian - ABC...*/
        switch (aIndex)
        {
        case 0:
            if (ch == 'A')
                aSum++;
            break;
        case 1:
            if (ch == 'B')
                aSum++;
            break;
        case 2:
            if (ch == 'C')
                aSum++;
            break;
        }
        aIndex++;
        if (aIndex == 3)
        {
            aIndex = 0;
        }

        /*Bruno - BABC...*/
        switch (bIndex)
        {
        case 0:
            if (ch == 'B')
                bSum++;
            break;
        case 1:
            if (ch == 'A')
                bSum++;
            break;
        case 2:
            if (ch == 'B')
                bSum++;
            break;
        case 3:
            if (ch == 'C')
                bSum++;
            break;
        }

        bIndex++;
        if (bIndex == 4)
        {
            bIndex = 0;
        }

        /*Goran - CCAABB..*/
        switch (gIndex)
        {
        case 0:
            if (ch == 'C')
                gSum++;
            break;
        case 1:
            if (ch == 'C')
                gSum++;
            break;
        case 2:
            if (ch == 'A')
                gSum++;
            break;
        case 3:
            if (ch == 'A')
                gSum++;
            break;
        case 4:
            if (ch == 'B')
                gSum++;
            break;
        case 5:
            if (ch == 'B')
                gSum++;
            break;
        }

        gIndex++;
        if (gIndex == 6)
        {
            bIndex = 0;
        }
    }

    winner = std::max(aSum, bSum);
    winner = std::max(winner, gSum);

    std::cout << winner << "\n";

    if (aSum == winner)
    {
        std::cout << "Adrian\n";
    }
    if (bSum == winner)
    {
        std::cout << "Bruno\n";
    }
    if (gSum == winner)
    {
        std::cout << "Goran\n";
    }

    return 0;
}