#include <iostream>



int main()
{
	int N, t;
	int A[200000];
	int nextLow = 0;
	int lowestIndex = 0;
	bool alreadyPrinted = false;

	int count = 0;

	std::cin >> N >> t;
	for (int i = 0; i < N; i++)
	{
		std::cin >> A[i];
	}

	switch (t) {
	case 1:
		[&] {
			for (int i = 0; i < N; i++)
			{
				if (A[i] < 7777)
				{
					for (int j = 0; j < N; j++)
					{
						if ((A[i] != A[j]) && (A[i] + A[j] == 7777))
						{
							std::cout << "Yes\n";
							return;
						}
					}
				}
			}
			std::cout << "No\n";
		}();
		break;
	case 2:
		[&] {
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < N; j++)
				{
					if ((i != j) && A[i] == A[j])
					{
						std::cout << "Contains duplicate\n";
						return;
					}
				}
			}
			std::cout << "Unique\n";
		}();
		break;
	case 3:
		[&] {
			for (int i = 0; i < N; i++)
			{
				count = 1;
				for (int j = 0; j < N; j++)
				{
					if ((i != j) && A[i] == A[j])
					{
						count++;
					}
				}

				if (count > N / 2)
				{
					std::cout << A[i];
					return;
				}
				else
				{
					count = 1;
				}
			}
			std::cout << -1;
		}();
		break;
	case 4:
		for (int i = 0; i <= N / 2; i++)
		{
			nextLow = A[i];
			lowestIndex = i;
			for (int j = i; j < N; j++)
			{
				if (A[j] < nextLow)
				{
					nextLow = A[j];
					lowestIndex = j;
				}
			}
			A[lowestIndex] = A[i];
			A[i] = nextLow;
		}

		if (N % 2 == 0)
		{
			std::cout << A[N / 2 - 1] << " " << A[N / 2] << "\n";
		}
		else
		{
			std::cout << A[N / 2] << "\n";
		}
		break;
		case 5:
			for (int i = 0; i <= N; i++)
			{
				nextLow = A[i];
				lowestIndex = i;
				for (int j = i; j < N; j++)
				{
					if (A[j] < nextLow)
					{
						nextLow = A[j];
						lowestIndex = j;
					}
				}
				A[lowestIndex] = A[i];
				A[i] = nextLow;
			}

			for (int i = 0; i <= N; i++)
			{
				if (A[i] >= 100 && A[i] <= 999)
				{
					if (alreadyPrinted)
					{
						std::cout << " ";
					}
					std::cout << A[i];
					alreadyPrinted = true;
				}
			}
	}

	return 0;
}