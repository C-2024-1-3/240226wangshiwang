#include <iostream>
#include <cmath>  
using namespace std;
int main()
{
    double a, x, b;
    cout << "������һ������ a: ";
    cin >> a;
    if (a < 0) {
        cout << "��������ֱ�����������" << endl;
        return 1;
    }
    x = a;
    b = 1e-5;
    while (1)
    {
        double d = 0.5 * (x + a / x);
        if (fabs(d - x) < b)
        {
            x = d;
            break;
        }
        x = d;
    }
    cout << "ƽ����Ϊ" << x << endl;
    return 0;
}