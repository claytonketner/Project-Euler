#ifndef P11_h
#define P11_h

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class P11
{
public:
	P11();
	bool loadFile();
	int solve();
	int grid[20][20];

private:
	void performMultiplication(const int i, const int j, const int iDir, const int jDir, int* maxProduct);
	void updateMaxProduct(int currentProduct, int* maxProduct);
	ifstream inFile;
};


#endif