#include <iostream>
using namespace std;
int main()
{
	double a, b, c, s;
	cout << "请输入边长a，b，c" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		s = a + b + c;
		cout << "三角形周长为s=" << s << endl;
		if (a == b || a == c || b == c)
		{
			cout << "这是等腰三角形" << endl;
		}
		else
		{
			cout << "这不是等腰三角形" << endl;
		}
	}
	else
	{
		cout << "您输入的边长不能构成三角形" << endl;
	}
	return 0;
}