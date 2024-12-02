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
    cout << "请输入数组元素个数：";
    cin >> n;

    int* arr = new int[n];

    cout << "请输入数组元素：" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << "元素 " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "输入的数组元素为：" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << "arr[" << i << "] = " << *(arr + i) 
             << ", 地址：" << (arr + i) << endl;
    }

    bubblesort(arr, n);

    cout << "排序后的数组：" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << *(arr + i) << " ";
    }
   
    delete[]arr;
    return 0;
}