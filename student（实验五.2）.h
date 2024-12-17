#pragma once
#include <string>
class Student              //类声明
{
public:           //公用成员函数原型声明

	void set_value(int n, const char* nm, char s);
	void display();

private:
	int num;
	char name[20];
	char sex;
};
