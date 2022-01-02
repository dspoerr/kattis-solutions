#include <iostream>
#include <vector>
#include <climits>

int main()
{
    int numChildren;
    int reluctance, highestSum, bIndex;
    std::vector<int> vector;
    
    std::cin >> numChildren;

    /* puts the input into an array. stores the index of Bjorn to remove later*/
    for (int i = 0; i < numChildren; i++)
    {
        std::cin >> reluctance;
        vector.push_back(reluctance);
        if (reluctance == 0)
        {
            bIndex = i;
        }
    }
    vector.erase(vector.begin() + bIndex);

    /* n^2 solution that iterates through the list and tests every possible 
       location for Bjorn to be in. Sets the maximum sum. */
    highestSum = INT_MIN;
    for (int i = 0; i < numChildren; i++)
    {
        vector.insert((vector.begin() + i), 0);
        int sum = 0;
        for (int j = 0; j < numChildren; j++)
        {
            sum += (vector.at(j) * (j+1));
        }

        if (sum > highestSum)
        {
            highestSum = sum;
        }
        vector.erase(vector.begin() + i);
    }
    
    std::cout  << highestSum;
    return 0;
}
