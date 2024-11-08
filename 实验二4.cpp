#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	char z;
	cout << "请输入a和b两个数" << endl;
	cin >> a >> b;
	cout << "请输入运算符" << endl;
	cin >> z;
	switch (z)
	{
	case '+':
		c = a + b;
		cout << c << endl;
		break;
	case '-':
		c = a - b;
		cout << c << endl;
		break;
	case '/':
		if (b == 0)
		{
			cout << "被除数为0无法计算" << endl;
		}
		else
		{
			c = a / b;
			cout << c << endl;
		}
		break;
	case'*':
		c = a * b;
		cout << c << endl;
		break;
	case'&':
		c = a * b;
		cout << c << endl;
		break;
	default:
		cout << "此为非法运算" << endl;
	}
	return 0;
}