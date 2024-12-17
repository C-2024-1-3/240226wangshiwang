#include<iostream>
using namespace std;
class cft
{
public:
	void input(int a, int b, int c)
	{
		this->length = a;
		this->width = b;
		this->height = c;
		v = a * b * c;
	}
	void show()
	{
		cout << "Ìå»ýÎª£º" << v << endl;
	}
private:
	int length;
	int width;
	int height;
	int v;
};
int main()
{
	cft t1;
	cft t2;
	cft t3;
	t1.input(2, 3, 4);
	t2.input(4, 6, 8);
	t3.input(6, 8, 6);
	t1.show();
	t2.show();
	t3.show();
	return 0;
}