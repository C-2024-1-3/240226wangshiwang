#include<iostream>
using namespace std;
class Time                // ����Time��
{
public:
    void input(int a,int b,int c) //���뺯��
    {
        this->hour = a;
        this->minute = b;
        this->sec = c;
    }

    void show()    //�������
    {
        cout << "�����ʱ��Ϊ��" << endl;
        cout <<hour << ": " << minute << ": " << sec << endl;
    }
private:               
    int hour;   //����ʱ��
    int minute; //�������
    int sec;    //��������
};
int main()
{
    Time t1;              
    t1.input(12, 30, 26);
    t1.show();
    return 0;
}