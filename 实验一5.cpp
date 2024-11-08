#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double c, f;//定义华氏度c和摄氏度f
	cout << "输入华氏温度c" << endl;
	cin >> c;
	f = (c - 32) * 5 / 9;
	cout<<fixed<< setprecision(2) << "输出摄氏温度f=" << f << endl;
	return 0;
}
