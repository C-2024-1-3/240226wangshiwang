#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double c, f;//���廪�϶�c�����϶�f
	cout << "���뻪���¶�c" << endl;
	cin >> c;
	f = (c - 32) * 5 / 9;
	cout<<fixed<< setprecision(2) << "��������¶�f=" << f << endl;
	return 0;
}
