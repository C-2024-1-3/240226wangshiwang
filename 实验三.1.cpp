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
    int m, n;
    cout << "����������������: ";
    cin >> m >> n;
    int c = gcd(m, n);
    int d = (m * n) / gcd(m, n);
    cout << "���Լ��: " << c << endl;
    cout << "��С������: " << d << endl;
    return 0;
}