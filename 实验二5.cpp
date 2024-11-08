#include <iostream> 
#include<string>
using namespace std;
int main()
{
    string str;
    int l, k, s, q;
    cout << "请输入一行字符" << endl;
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
    cout << "英文字母个数为" << l << endl;
    cout << "空格个数为" << k << endl;
    cout << "数字个数为" << s << endl;
    cout << "其他字符个数为" << q << endl;
    return 0;
}