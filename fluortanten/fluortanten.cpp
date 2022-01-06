#include <iostream>
#include <vector>
#include <climits>

int main()
{
    int64_t numChildren;
    int64_t reluctance;
    int64_t sum;
    int64_t k;

    int64_t currentDiff, highestDiff;

    std::cin >> numChildren;

    sum = 0;
    k = 0;

    highestDiff = 0;
    currentDiff = 0;

    for (int64_t i = 0; i < numChildren; i++)
    {
        std::cin >> reluctance;
        if (reluctance == 0)
        {
            continue;
        }
        k++;
        sum += (reluctance * (k+1));
        currentDiff -= reluctance;

        if (currentDiff > highestDiff)
        {
            highestDiff = currentDiff;
        }
    }

    if (highestDiff == INT64_MIN) 
    {
        highestDiff = 0;
    }

    std::cout << (sum + highestDiff);
    return 0;
}
