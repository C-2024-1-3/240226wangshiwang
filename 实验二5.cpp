#include <iostream> 
#include<string>
using namespace std;
int main()
{
    string str;
    int l, k, s, q;
    cout << "������һ���ַ�" << endl;
    getline(cin, str);
    l = 0;
    k = 0;
    s = 0;
    q = 0;
    for (char c : str)
    {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            l++;
        }
        else if (c == ' ')
        {
            k++;
        }
        else if (c >= '0' && c <= '9')
        {
            s++;
        }
        else
        {
            q++;
        }
    }
    cout << "Ӣ����ĸ����Ϊ" << l << endl;
    cout << "�ո����Ϊ" << k << endl;
    cout << "���ָ���Ϊ" << s << endl;
    cout << "�����ַ�����Ϊ" << q << endl;
    return 0;
}