#include <iostream> 
using namespace std;
int main()
{
    int a = 2;
    int sum = 0;
    int day = 0;
    int money = 0;
    while (a <= 100)
    {
        sum += a;
        a *= 2;
        day++;
    }
    money = sum * 0.8;
    int v = sum / day;
    cout << "ÿ��ƽ����" << v << "Ԫ" << endl;
    return 0;
}