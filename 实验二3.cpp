#include <iostream>
using namespace std;
int main()
{
	double a, b, c, s;
	cout << "������߳�a��b��c" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		s = a + b + c;
		cout << "�������ܳ�Ϊs=" << s << endl;
		if (a == b || a == c || b == c)
		{
			cout << "���ǵ���������" << endl;
		}
		else
		{
			cout << "�ⲻ�ǵ���������" << endl;
		}
	}
	else
	{
		cout << "������ı߳����ܹ���������" << endl;
	}
	return 0;
}