#include <iostream>
using namespace std;

// 定义学生结构体
struct Student
{
    int id;        // 学号
    double score;  // 成绩
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
   
    cout << "最高成绩的学生学号是: " << students[max].id << endl;
}

int main() 
{
    // 创建一个包含5个学生的数组
    Student students[5] =
    {
        {1, 85},
        {2, 92},
        {3, 78},
        {4, 88},
        {5, 95}
    };

    // 调用max函数，查找并输出成绩最高的学生学号
    max(students, 5);

    return 0;
}