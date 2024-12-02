#include<iostream>
using namespace std;
#define n 3.14159
int main()
{
	int a, b, v;
	cout"输入圆锥的底面半径和圆锥的高" << endl;
	cin >> a >> b;
	v=1/3*b*(na^2)             //n为圆周率
	cout << "圆锥的体积v=" << v << endl;
	return 0;
} 