#pragma once
#include <string>
class Student              //������
{
public:           //���ó�Ա����ԭ������

	void set_value(int n, const char* nm, char s);
	void display();

private:
	int num;
	char name[20];
	char sex;
};
