#include <iostream>
#include <vector>

int main() {
	int numOfInts, currentInt;
	std::cin >> numOfInts;

	std::vector<int> vector;

	for (int i = 0; i < numOfInts; i++)
	{
		std::cin >> currentInt;
		vector.push_back(currentInt);
	}

	for (int i = numOfInts; i > 0; i--)
	{
		currentInt = vector.back();
		std::cout << currentInt << "\n";
		vector.pop_back();
	}

	return 0;
}