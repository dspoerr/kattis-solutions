#include <iostream>
#include <string>
#include <limits.h>

int main()
{
    int numOfAnswers, index;
    int aSum, bSum, gSum;
    int winner;
    std::string answers;

    char adrian[3] = {'A', 'B', 'C'};
    int aLength = sizeof(adrian) / sizeof(adrian[0]);
    int bruno[4] = { 'B', 'A', 'B', 'C' };
    int bLength = sizeof(bruno) / sizeof(bruno[0]);
    int goran[6] = {'C', 'C', 'A', 'A', 'B', 'B'};
    int gLength = sizeof(goran) / sizeof(goran[0]);

    std::cin >> numOfAnswers;
    std::cin >> answers;

    index = 0;
    aSum = 0;
    bSum = 0;
    gSum = 0;
    for (auto& ch : answers)
    {
        if (adrian[index % aLength] == ch)
            aSum++;
        if (bruno[index % bLength] == ch)
            bSum++;
        if (goran[index % gLength] == ch)
            gSum++;

        index++;
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