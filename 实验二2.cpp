#include <iostream>
using namespace std;
int main()
{
	double x, y;
	cout << "请输入x" << endl;
	cin >> x;
	if (0 < x && x < 5)
	{
		if (0 < x && x < 1)
		{
			y = 3 - 2 * x;
			cout << y << endl;
		}
		else
		{
			y = 2 / (4 * x) + 1;
			cout << y << endl;
		}
	}
	else if (5 <= x && x <= 10)
	{
		y = x * x;
		cout << y << endl;
	}
	else
	{
		cout << "x不在定义域范围内" << endl;
	}
	return 0;
}