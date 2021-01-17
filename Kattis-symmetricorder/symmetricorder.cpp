#include <iostream>
#include <string>
using namespace std;

int main() {
	int numOfStrings = 0;
	string array [15];
	int setNo = 1;
	int k = 0;
	string input;

	while (true) {
		cin >> numOfStrings;
		if (numOfStrings == 0) {
			break;
		}
		cout << "SET " << setNo << endl;

		for (int i = 0; i < numOfStrings; i++) {
			if (i % 2 == 0) {
				cin >> input;
				cout << input << endl;
			}
			else {
				cin >> array[k];
				k++;
			}
		}

		for (int j = ((numOfStrings) / 2 - 1); j >= 0; j--) {
			cout << array[j] << endl;
		}
		k = 0;
		setNo++;
	}

	return 0;
}