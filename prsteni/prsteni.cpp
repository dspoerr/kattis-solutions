#include <iostream>

int main()
{
	int numOfRings;
	int ringRadii[100];
	int remainder, numerator, denominator; 

	std::cin >> numOfRings;

	// input
	for (int i = 0; i < numOfRings; i++)
	{
		std::cin >> ringRadii[i];
	}

	// output
	
	for (int i = 1; i < numOfRings; i++)
	{
		// will be 0 if current ring > base ring
		// will be >1 if current ring < base ring
		numerator = ringRadii[0] / ringRadii[i];

		// capture remainder from integer division
		remainder = ringRadii[0] % ringRadii[i];

		denominator = ringRadii[i];

		if (remainder == 0)
		{
			denominator = 1;
			std::cout << numerator << "/" << denominator << "\n";
		}
		else if (numerator >= 1)
		{
			// base ring larger, so we check from the current ring downwards
			for (int gcd = ringRadii[i]; gcd > 0; gcd--)
			{
				// GCD found
				if (ringRadii[i] % gcd == 0 && remainder % gcd == 0)
				{
					remainder = remainder / gcd;
					denominator = ringRadii[i] / gcd;
					break;
				}
			}
			std::cout << (numerator * denominator + remainder) << "/" << denominator << "\n";
		}
		else if (numerator < 1)
		{
			// current ring larger, so we check from the base ring downwards
			for (int gcd = ringRadii[0]; gcd > 0; gcd--)
			{
				// GCD found
				if (ringRadii[i] % gcd == 0 && remainder % gcd == 0)
				{
					remainder = remainder / gcd;
					denominator = ringRadii[i] / gcd;
					break;
				}
			}
			std::cout << (remainder) << "/" << denominator << "\n";
		}
		
	}
	
	return 0;
}