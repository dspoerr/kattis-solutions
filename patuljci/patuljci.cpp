#include <iostream>

#define NUM_OF_DWARVES 9

int main() {

	int sum = 0;
	int max = 100;
	int hatNums[NUM_OF_DWARVES];
	int index1, index2;

	// load data
	for (int i = 0; i < NUM_OF_DWARVES; i++)
	{
		std::cin >> hatNums[i];
		sum += hatNums[i];
	}

	// brute force method
	[&] {
		for (int i = 0; i < NUM_OF_DWARVES; i++)
		{
			index1 = i;
			sum -= hatNums[i];
			for (int j = 0; j < NUM_OF_DWARVES; j++)
			{
				if (i == j)
				{
					continue;
				}
				index2 = j;
				sum -= hatNums[j];
				if (sum == 100)
				{
					return; // break out of all for loops
				}

				sum += hatNums[j];
			}
			sum += hatNums[i];
		}
	}();
	
	// print out results
	for (int i = 0; i < NUM_OF_DWARVES; i++)
	{
		if (i != index1 && i != index2)
		{
			std::cout << hatNums[i] << "\n";
		}
	}
	
	return 0;
}