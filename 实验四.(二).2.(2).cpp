#include <iostream>
using namespace std;
int parseHex(const char* const hexString)
{
    int s = 0;
    for (int i = 0; hexString[i] != '\0'; i++)
    {
        char c = hexString[i];
        int x;

       
        if (c >= '0' && c <= '9')
        {
            x = c - '0';  
        }
        else if (c >= 'A' && c <= 'F')
        {
           x= c - 'A' + 10;  
        }
        else if (c >= 'a' && c <= 'f') 
        {
            x = c - 'a' + 10;  
        }
        else 
        {
            return 0;  
        }

        
        s= s * 16 + x;
    }

    return s;
}

int main()
{
    string str;
    cout << "������һ��16���Ƶ���ֵ" << endl;
    cin >> str;

    const char* hexString = str.c_str();
    int s = parseHex(hexString);
    cout << "�������ʮ����Ϊ��" << s << endl;
	return 0;
}