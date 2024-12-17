#include<iostream>
using namespace std;
#include"student（实验五.2）.h" 
int main()
{
    Student stud;                     // 定义对象
    stud.set_value(007, "tcg", 'm');  // 调用 set_value 设置值
    stud.display();                   // 调用 display 显示数据

    return 0;
}