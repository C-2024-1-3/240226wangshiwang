#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	char z;
	cout << "������a��b������" << endl;
	cin >> a >> b;
	cout << "�����������" << endl;
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
			cout << "������Ϊ0�޷�����" << endl;
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
		cout << "��Ϊ�Ƿ�����" << endl;
	}
	return 0;
}