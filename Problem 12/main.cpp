#include <iostream>
#include <time.h>

using namespace std;

int main(int argc, char* argv[])
{
	int currentValue = 1;
	int valueIndex = 1;
	int numFactors = 0;

	clock_t startTime = clock();

	while(true)
	{
		numFactors = 2; // 1 and itself
		for (int i = 2; i < currentValue/2 + 1; i++)
		{
			if (currentValue % i == 0) { numFactors++; }
		}

		if (numFactors >= 100) { cout << currentValue << ": #" << valueIndex << " - " << numFactors << "\n"; }

		if (numFactors <= 500)
		{
			valueIndex++;
			currentValue += valueIndex;		
		} else { break; }
	}

	cout << "Answer: " << currentValue << "\n";
	cout << "Time: " << 1.0*(clock() - startTime)/CLOCKS_PER_SEC << " seconds \n";

	return 0;
}