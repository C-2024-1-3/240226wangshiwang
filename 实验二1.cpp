#include <iostream>
using namespace std;
int main()
{
	char c;
	cout << "��������ĸ" << endl;
	cin >> c;
	if (c >= 'a' && c <= 'z')
	{
		cout << char(c - 32) << endl;
	}
	else
	{
		cout << int(c) << endl;
	}

	return 0;
}