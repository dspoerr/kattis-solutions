#include <iostream>
using namespace std;

int main() {
	int numOfStones = 0;

	cin >> numOfStones;

	if (numOfStones % 2 == 1) {
		cout << "Alice";
	}
	else
	{
		cout << "Bob";
	}
	
	return 0;
}