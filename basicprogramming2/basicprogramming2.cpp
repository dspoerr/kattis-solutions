#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

void merge(int[], int, int, int);
void mergesort(int[], int, int);

int A[200000];
unordered_set<int> set;

void printArray(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << "\n";
}

int main()
{
	int N, t;
	int leftIndex, rightIndex;
	bool alreadyPrinted = false;

	int count = 0;

	std::cin >> N >> t;
	for (int i = 0; i < N; i++)
	{
		std::cin >> A[i];
	}

	switch (t) {
	case 1:
		mergesort(A, 0, N);
		leftIndex = 0;
		rightIndex = N;
		printArray(A, N);

		for (int i = 0; i < N+1; i++)
		{
			if ((A[leftIndex] > 7777))
			{
				cout << "No\n";
				break;
			}
			else if (A[rightIndex] > 7777 && rightIndex > leftIndex)
			{
				rightIndex--;
			}
			else if (A[leftIndex] + A[rightIndex] < 7777 && leftIndex < rightIndex)
			{
				leftIndex++;
			}
			else if (A[leftIndex] + A[rightIndex] == 7777)
			{
				cout << "Yes\n";
				break;
			}
			else
			{
				cout << "No\n";
				break;
			}
		}

		break;
	case 2:
		for (int i = 0; i < N; i++)
		{
			set.insert(A[i]);
		}

		if (set.size() == N)
		{
			cout << "Unique\n";
		}
		else
		{
			cout << "Contains duplicate\n";
		}
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
		mergesort(A, 0, N);

		if (N % 2 == 0)
		{
			std::cout << A[N / 2] << " " << A[N / 2 + 1] << "\n";
		}
		else
		{
			std::cout << A[N / 2 + 1] << "\n";
		}
		break;
		case 5:
			mergesort(A, 0, N);

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

void mergesort(int array[], int begin, int end)
{
	if (begin >= end)
	{
		return;
	}

	auto mid = begin + (end - begin) / 2;
	mergesort(array, begin, mid);
	mergesort(array, mid + 1, end);

	cout << "DEBUG 1 - ";
	printArray(array, end);

	merge(array, begin, mid, end);
	cout << "DEBUG 2 - ";
	printArray(array, end);


	return;
}

void merge(int array[], int left, int mid, int right)
{
	auto const subArrayOne = mid - left + 1;
	auto const subArrayTwo = right - mid;

	auto* leftArray = new int[subArrayOne],
		* rightArray = new int[subArrayTwo];

	for (auto i = 0; i < subArrayOne; i++)
		leftArray[i] = array[left + i];
	for (auto j = 0; j < subArrayTwo; j++)
		rightArray[j] = array[mid + 1 + j];

	auto indexOfSubArrayOne = 0,
		indexOfSubArrayTwo = 0;
	int indexOfMergedArray = left;

	while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
		if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
			array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
			indexOfSubArrayOne++;
		}
		else {
			array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
			indexOfSubArrayTwo++;
		}
		indexOfMergedArray++;
	}

	cout << "DEBUG 3 - ";
	printArray(array, right);

	while (indexOfSubArrayOne < subArrayOne) {
		array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
		indexOfSubArrayOne++;
		indexOfMergedArray++;
	}

	while (indexOfSubArrayTwo < subArrayTwo) {
		array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
		indexOfSubArrayTwo++;
		indexOfMergedArray++;
	}

	cout << "DEBUG 4 - ";
	printArray(array, right);

	return;
}