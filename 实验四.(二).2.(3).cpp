#include<iostream>
using namespace std;
void bubblesort(int arr[], int size) 
{
    bool changed = true;
    do {
        changed = false;
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                changed = true;
            }
        }
        size--;
    } while (changed);
}
int main()
{
    int n;  
    cout << "����������Ԫ�ظ�����";
    cin >> n;

    int* arr = new int[n];

    cout << "����������Ԫ�أ�" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << "Ԫ�� " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "���������Ԫ��Ϊ��" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << "arr[" << i << "] = " << *(arr + i) 
             << ", ��ַ��" << (arr + i) << endl;
    }

    bubblesort(arr, n);

    cout << "���������飺" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << *(arr + i) << " ";
    }
   
    delete[]arr;
    return 0;
}