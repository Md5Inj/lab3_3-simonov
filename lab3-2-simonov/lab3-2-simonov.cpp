#include "stdafx.h"
#include <cmath>
#include <iostream>

using namespace std;

int fact(int i)
{
	return !i ? 1 : i * fact(i - 1);
}

int main()
{
	int n = 0, step = 0;
	double result = 0, currentResult = 0, e = 0, x = 0;
	cout << "Input x and e: "; cin >> x >> e;
	do
	{
		currentResult = pow(x - 1, 2 * n + 1) / ((2 * n + 1)*pow(x + 1, 2 * n + 1));
		cout << "Argument is " << x << " function is " << currentResult << " count of iterations is " << n << endl;
		result += currentResult;
		n++;
	} while (fabs(currentResult) > e);
	system("pause");
	return 0;
}
