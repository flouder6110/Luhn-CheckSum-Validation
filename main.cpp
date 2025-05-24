#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{

	int i = 1; // for loop start at 1.
	char digit;
	int oddCounter = 0;
	int evenCounter = 0;


	cout << "Enter a sequence of numbers : ";
	digit = cin.get();

	while (digit != 10)
	{
		int doubled = 2 * (digit - '0');
		int num = (digit - '0');

		if (i % 2 == 0)
		{
			if (doubled < 10)
			{

				oddCounter += doubled;
				evenCounter += num;

			}
			else
			{
				oddCounter += (doubled / 10) + (doubled % 10);
				evenCounter += num;
			}
		}
		else {

			if (doubled < 10)
			{
				evenCounter += doubled;
				oddCounter += num;

			}
			else
			{
				evenCounter += (doubled / 10) + (doubled % 10);
				oddCounter += num;
			}
		}
		digit = cin.get();
		i++;
	}

	int checkSum;

	if ((i - 1) % 2 == 0) checkSum = evenCounter;
	else checkSum = oddCounter;

	cout << "The checkSum is " << checkSum << endl;

	if (checkSum % 10 == 0)
	{
		cout << checkSum << " Is a Valid Number" << endl;
	}
	else
	{
		cout << checkSum << " Is NOT a Valid Number" << endl;
	}

	return 0;
}
