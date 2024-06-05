#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int cash = 0;

	if (a == b && b == c)
	{
		cash = 10000 + 1000 * a;
	}
	else if (a == b || a == c)
	{
		cash = 1000 + 100 * a;
	}
	else if (b == c)
	{
		cash = 1000 + 100 * b;
	}
	else
	{
		cash = max(max(a, b), c) * 100;
	}

	cout << cash << endl;

	return 0;
}