#include <iostream>
using namespace std;
bool is_prime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <=num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a = 0;//用来记录素数的数量
    int num = 2;

    while (a < 200)
    {
        if (is_prime(num) == 1)
        {
            cout << num << '\t';
            a++;


            if (a % 10 == 0)
            {
                cout << endl;
            }
        }

        num++;
    }
    return 0;
}