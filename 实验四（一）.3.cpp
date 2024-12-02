#include<iostream>
using namespace std;
int main()
{
	bool a[100];
	for (int i = 0; i < 100; i++)
	{
		a[i] = true;
	}
	for (int i = 2; i < 101; i++)
	{
		for (int j = i; j < 101; j+=i)
		{
			a[j] = !a[j];
		}
	}

	cout << "开着的柜子号码为：" << endl;
	for (int i = 0; i < 100; i++)
	{
		if (a[i] == true)
		{
			cout << i+1 << " ";
		}
	}
	return 0;
}