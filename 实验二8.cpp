#include <iostream>
#include <cmath>  
using namespace std;
int main()
{
    double a, x, b;
    cout << "请输入一个正数 a: ";
    cin >> a;
    if (a < 0) {
        cout << "输入的数字必须是正数！" << endl;
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
    cout << "平方根为" << x << endl;
    return 0;
}