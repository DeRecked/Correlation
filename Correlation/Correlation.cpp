#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	const int SIZE = 12;
	const float x[SIZE] = { 14.2, 16.4, 11.9, 15.2, 18.5, 22.1, 19.4, 25.1, 23.4, 18.1, 22.6, 17.2 };
	const float y[SIZE] = { 215, 325, 185, 332, 406, 522, 412, 614, 544, 421, 445, 408 };

	float Mx = 0, My = 0, xy = 0, xx = 0, yy = 0, coeff = 0;

	// Calculate mean of x and y
	for (int i = 0; i < SIZE; i++)
	{
		Mx += x[i] / SIZE;
		My += y[i] / SIZE;
	}

	// Calculate summation of x*y and std deviation 
	for (int i = 0; i < SIZE; i++)
	{
		xy += (x[i] - Mx) * (y[i] - My);
		xx += (x[i] - Mx) * (x[i] - Mx);
		yy += (y[i] - My) * (y[i] - My);
	}

	// Calculate correlation coefficient
	coeff = xy / sqrt(xx*yy);
	
	// Print values
	cout << "Mx = " << Mx << endl;
	cout << "My = " << My << endl;
	cout << "xy = " << xy << endl;
	cout << "xx = " << xx << endl;
	cout << "yy = " << yy << endl;
	cout << "coeff = " << coeff << endl;

	return 0;
}