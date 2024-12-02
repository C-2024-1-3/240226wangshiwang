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
    cout << "请输入两个正整数: ";
    cin >> m >> n;
    int c = gcd(m, n);
    int d = (m * n) / gcd(m, n);
    cout << "最大公约数: " << c << endl;
    cout << "最小公倍数: " << d << endl;
    return 0;
}