#include <iostream>
using namespace std;

// ����ѧ���ṹ��
struct Student
{
    int id;        // ѧ��
    double score;  // �ɼ�
};

void max(Student* students, int n) 
{
    int max = 0;  
    for (int i = 1; i < n; i++) 
    {
        if (students[i].score > students[max].score) 
        {
            max= i;  
        }
    }
   
    cout << "��߳ɼ���ѧ��ѧ����: " << students[max].id << endl;
}

int main() 
{
    // ����һ������5��ѧ��������
    Student students[5] =
    {
        {1, 85},
        {2, 92},
        {3, 78},
        {4, 88},
        {5, 95}
    };

    // ����max���������Ҳ�����ɼ���ߵ�ѧ��ѧ��
    max(students, 5);

    return 0;
}