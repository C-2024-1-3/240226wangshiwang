#include <iostream>
#include<iomanip>
#include "mytemperature.h"
using namespace std;
int main()
{
    cout << fixed << setprecision(2);
    cout << "Celsius    Fahrenheit   |   Fahrenheit       Celsius" << endl;

    for (double cel = 40.0, fah = 120.0; cel >= 31.0; cel--, fah -= 10.0)
    {
        double fah2 = celsius_to_fah(cel); // ���ϵ�����
        double cel2 = fahrenheit_to_cels(fah); // ���ϵ�����

        cout << setw(7) << cel << "    " << setw(10) << fah2
            << "  |  " << setw(10) << fah << "       " << setw(7) << cel2 << endl;
    }
    return 0;
}