#include<iostream>
using namespace std;
int main()
{
	int a = 1;
	for (int i = 0; i < 9; i++)
	{
		a = (a + 1) * 2;

	}
	cout << "总共有" << a << "个桃子" << endl;
	return 0;
}