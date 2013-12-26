// Clayton Salinger Ketner -- December 25, 2013
// Add 100 50-digit numbers
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(int argc, char* argv[])
{
	ifstream inFile;
	inFile.open("input.txt", ios::in);

	int numbers[100][50] = {0};
	int result[60] = {0}; // Index 0 = ones place, index 1 = tens place, etc. 
						   // First value initialized, so all other values automatically initialized to 0
	int resultSize = sizeof(result)/sizeof(int);

	string line;
	int lineNumber = 0;

	// Read the file
	while (getline(inFile, line))
	{
		for (int i = 0; i < line.length(); i++)
		{
			numbers[lineNumber][i] = line[i] - '0';
		}

		lineNumber++;
	}

	// Do the math
	for (int col = 50-1; col >= 0; col--) // Start at the ones place
	{
		int resultIndex = 50-1 - col; // Start at index 0

		for (int row = 0; row < 100; row++) 
		{
			result[resultIndex] += numbers[row][col];
		}
	}

	// Carry the excess ("carry the 1...")
	for (int i = 0; i < resultSize-1; i++)
	{
		cout << "Indices " << i + 1 << ", " << i << " : " << result[i + 1] << ", " << result[i];
		if (result[i] > 9)
		{
			result[i + 1] += result[i]/10; // Take all numbers not including the ones place and add them to the next index
			result[i] = result[i] % 10; // Make this index only be one digit long
		}
		cout << "\tNow: " << result[i + 1] << ", " << result[i] << "\n";
	}

	// Print the result
	bool numberStarted = false;
	for (int i = resultSize-1; i >= 0; i--)
	{
		if (result[i] != 0) { numberStarted = true; } // Check for first nonzero before starting to print

		if (numberStarted) { cout << result[i]; }
	}

	cout << "\n";
}