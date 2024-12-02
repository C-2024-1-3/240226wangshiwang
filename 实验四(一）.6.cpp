#include<iostream>
#include <cctype> 
using namespace std;
void count(const char s[], int counts[])
{
    for (int i = 0; i < 26; ++i)
    {
        counts[i] = 0;
    }

    for (int i = 0; s[i] != '\0'; i++)
    {
        char ch = s[i];
        ch = tolower(ch);
        
        if (ch >= 'a' && ch <= 'z')
        {
            int a = 0;
            a = ch - 'a';
            counts[a]++;
        }
    }


}
int main()
{
    string str;
    cout << "ÇëÊäÈëÒ»¾ä»°" << endl;
    cin >> str;
    const char* ch = str.c_str();
    int counts[26] = { 0 };

    count(ch, counts);

    for (int i = 0; i < 26; i++)
    {
        if (counts[i] > 0)
        {
            cout << char('a' + i) << "£º" << counts[i] << endl;
        }
    }
    return 0;
}