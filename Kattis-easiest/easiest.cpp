#include <iostream>
using namespace std;

// https://open.kattis.com/problems/easiest
int main() {
	int n = 0;
	int t = 0;
	int p;
	int m = 0;
	int sumOfNDigits = 0;
	int sumOfMDigits = 0;

	while (true) {
		cin >> n;

		if (n < 1 || n > 100000) {
			break;
		}

		t = n;
		sumOfNDigits = 0;
		while (t != 0) {
			sumOfNDigits += (t % 10);
			t = t / 10;
		}

		p = 11;
		while (true)
		{
			sumOfMDigits = 0;
			m = p * n;
			while (m != 0) {
				sumOfMDigits += (m % 10);
				m = m / 10;
			}

			if (sumOfMDigits == sumOfNDigits) {
				break;
			}
			p++;
		}
		cout << p << endl;
	}
	return 0;
}