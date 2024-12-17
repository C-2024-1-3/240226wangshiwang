#include<iostream>
using namespace std;
class Time                // 定义Time类
{
public:
    void input(int a,int b,int c) //输入函数
    {
        this->hour = a;
        this->minute = b;
        this->sec = c;
    }

    void show()    //输出函数
    {
        cout << "输入的时间为：" << endl;
        cout <<hour << ": " << minute << ": " << sec << endl;
    }
private:               
    int hour;   //定义时间
    int minute; //定义分钟
    int sec;    //定义秒钟
};
int main()
{
    Time t1;              
    t1.input(12, 30, 26);
    t1.show();
    return 0;
}