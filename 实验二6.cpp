#include <iostream>
using namespace std;
int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
	int a, b;
	cout << "请输入两个正整数: ";
	cin >> a >> b;
	int c = gcd(a, b);
    int d = (a * b) / gcd(a, b);
    cout << "最大公约数: " << c << endl;
    cout << "最小公倍数: " << d << endl;
	return 0;
}