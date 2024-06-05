#include <iostream>

using namespace std;

int main()
{
	double a, b;
	
	cin >> a >> b;
	
	double sum = a / b;

	cout.precision(10);
	cout << sum << endl;

	return 0;
}