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
	cout << "����������������: ";
	cin >> a >> b;
	int c = gcd(a, b);
    int d = (a * b) / gcd(a, b);
    cout << "���Լ��: " << c << endl;
    cout << "��С������: " << d << endl;
	return 0;
}