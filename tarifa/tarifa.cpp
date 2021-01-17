#include <iostream>
using namespace std;

// https://open.kattis.com/problems/tarifa
int main() {
	int mbPerMonth = 0; 
	int months = 0;
	int usageThisMonth = 0;
	int totalUsed = 0;
	int maxData = 0;
	int dataLeft = 0;

	cin >> mbPerMonth;
	cin >> months;
	for (int i = 0; i < months; i++) {
		cin >> usageThisMonth;
		totalUsed += usageThisMonth;
	}

	maxData = mbPerMonth * (months + 1);
	dataLeft = maxData - totalUsed;

	cout << dataLeft << endl;

	return 0;
}