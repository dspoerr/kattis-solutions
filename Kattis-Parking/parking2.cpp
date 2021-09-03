#include <iostream>
#include <string>
using namespace std;

int main() {

	int numOfTrials; 
	int numOfStores;
	int highestVal;
	int lowestVal;
	int x;

	cin >> numOfTrials;

	for (int i = 0; i < numOfTrials; i++) {
		cin >> numOfStores;
		highestVal = -1;
		lowestVal = 100;

		for (int j = 0; j < numOfStores; j++) {
			cin >> x;
			if (x > highestVal) {
				highestVal = x;
			}

			if (x < lowestVal) {
				lowestVal = x;
			}
		}
		x = ((highestVal - lowestVal) * 2);
		cout << x;
		cout << endl;

	}

	return 0;
}