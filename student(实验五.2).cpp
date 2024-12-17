#include <iostream>
#include"student（实验五.2）.h"  //不要漏写此行，否则编译通不过
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
}void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}