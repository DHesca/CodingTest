#include <iostream>

using namespace std;

int main()
{
	int h, m;
	int need_m;
	cin >> h >> m >> need_m;

	h += (need_m / 60);
	m += (need_m % 60);

	if (m >= 60)
	{
		h += 1;
		m = m - 60;
	}
	
	if (h >= 24)
	{
		h -= 24;
	}

	cout << h << " " << m << endl;

	return 0;
}