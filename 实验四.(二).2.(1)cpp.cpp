#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
    int len1 = 0, len2 = 0;
    while (s1[len1] != '\0') len1++;
    while (s2[len2] != '\0') len2++;

    for (int i = 0; i <= len2 - len1; i++)
    {

        int j = 0;
        while (s1[j] != '\0' && s2[i + j] == s1[j])
        {
            j++;
        }


        if (s1[j] == '\0')
        {
            return i;
        }
    }


    return -1;
}


int main()
{

    string str1;
    string str2;
    cout << "�������һ�仰" << endl;
    cin >> str1;
    cout << "������ڶ��仰" << endl;
    cin >> str2;

    const char* s1 = str1.c_str();
    const char* s2 = str2.c_str();



    int a = indexOf(s1, s2);

    if (a != -1)
    {
        cout << "s1��s2���Ӵ�" << '\t' << a << endl;
    }
    else
    {
        cout << "s1����s2���Ӵ�" << '\t' << "-1" << endl;
    }

    return 0;
}


