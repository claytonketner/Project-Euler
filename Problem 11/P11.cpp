#include "P11.h"

P11::P11()
{
}

bool P11::loadFile()
{
	inFile.open("input.txt", ios::in); 

	if (inFile.is_open())
	{
		int row = 0; // Array row
		string line;

		while (getline(inFile, line)) // Each line
		{
			int column = 0; // Array column
			for (int i = 0; i < line.length(); i++) // Each character of the line
			{
				if (line[i] == ' ') // New number?
				{
					column++;
				} else {
					grid[row][column] *= 10; // Multiply by ten to shift current value to the left
					grid[row][column] += ( line[i] - '0' ); // Subtract out ASCII value for '0' to convert to int
				}
			}

			row++;
		}

		inFile.close();
		return true;
	}
	else return false;
}

int P11::solve()
{
	int maxProduct = 0;

	for (int i = 0; i < 20; i++) // For each row
	{
		for (int j = 0; j < 20; j++) // For each column
		{
			// Diagonal products (upper left to lower right)
			if (i < 20-3 && j < 20-3) { performMultiplication(i, j, 1, 1, &maxProduct); }

			// Diagonal products (lower left to upper right)
			if (i >= 3 && j < 20-3) { performMultiplication(i, j, -1, 1, &maxProduct); }

			// Vertical products
			if (i < 20-3) { performMultiplication(i, j, 1, 0, &maxProduct); }

			// Horizontal products
			if (j < 20-3) { performMultiplication(i, j, 0, 1, &maxProduct); }
		}
	}

	return maxProduct;
}

// Takes current row and column (i and j), as well as directions to multiply in for i and j
// Directions are:	 1 = positive direction (to the right or down)
//					 0 = don't move
//					-1 = negative direction
void P11::performMultiplication(const int i, const int j, const int iDir, const int jDir, int* maxProduct)
{
	int currentProduct = 1;
	for (int k = 0; k < 4; k++) { currentProduct *= grid[i + iDir*k][j + jDir*k]; }
	updateMaxProduct(currentProduct, maxProduct);
}

void P11::updateMaxProduct(const int currentProduct, int* maxProduct)
{
	if (currentProduct > *maxProduct) { *maxProduct = currentProduct; }
}