#include <iostream>
#include"student��ʵ����.2��.h"  //��Ҫ©д���У��������ͨ����
using namespace std;
void Student::set_value(int n, const char* nm, char s)
{
    num = n;
    for (int i = 0; i < 3 && nm[i] != '\0'; i++)
    {
        name[i] = nm[i];
    }
    name[19] = '\0';
    sex = s;
}void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
}