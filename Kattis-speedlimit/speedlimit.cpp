#include <iostream>
using namespace std;


int main() {
	int pairsOfVals = 0;
	int currentSpeed = 0;
	int timeElapsed = 0;
	int previousTime = 0;
	int totalDistance = 0;

	while (true) {
		cin >> pairsOfVals;

		if (pairsOfVals == -1) {
			break;
		}

		previousTime = 0;
		totalDistance = 0;
		for (int i = 0; i < pairsOfVals; i++) {
			cin >> currentSpeed >> timeElapsed;

			totalDistance += ((timeElapsed-previousTime) * currentSpeed);
			previousTime = timeElapsed;
		}

		cout << totalDistance << " miles" << endl;
	}

	return 0;
}