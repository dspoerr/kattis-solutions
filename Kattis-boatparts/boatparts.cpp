#include <iostream>
#include <string>
using namespace std;


int main() {
	int numOfParts = 0;
	int numOfDays = 0;
	string boatArray [1000];
	int uniqueParts = 0;
	int day = 1;
	bool paradox = 1;
	string part;

	cin >> numOfParts >> numOfDays;

	for (int i = 0; i < numOfDays; i++) {
		cin >> part;

		uniqueParts++;
		for (int j = 0; j < numOfDays; j++) {
			if (part == boatArray[j]) {
				uniqueParts--;
				break;
			}
		}
		boatArray[i] = part;

		if (uniqueParts < numOfParts) {
			day++;
		}
		else {
			paradox = 0;
		}

	}
	if (paradox == 0) {
		cout << day << endl;
	}
	else {
		cout << "paradox avoided" << endl;
	}


	return 0;
}