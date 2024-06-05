#include <iostream>

using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;

	int quadrant = 0;

	if (x > 0)
	{
		quadrant = y > 0 ? 1 : 4;
	}
	else
	{
		quadrant = y > 0 ? 2 : 3;
	}

	cout << quadrant << endl;
	
	return 0;
}