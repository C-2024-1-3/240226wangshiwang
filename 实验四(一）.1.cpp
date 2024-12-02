#include<iostream>
using namespace std;

int main()
{
	int a[10];
	cout << "请输入10个数：" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	cout << "不同的数是：" << endl;
	for (int i = 0; i < 10; i++)
	{
		bool x = false;
		for (int j = 0; j < i; j++)
		{
			if (a[i] == a[j])
			{
				x = true;
				break;
			}
		}
		if (!x)
		{
			cout << a[i]<<"   ";
		}
	}

	cout << endl;
	return 0;
}