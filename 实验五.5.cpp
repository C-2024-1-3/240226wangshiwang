#include <iostream>
using namespace std;
class Point
{
public:

    Point(int a, int b)
    {
        this->x = a;
        this->y = b;
    }

    void setPoint(int i, int j)
    {
        this->x += i;
        this->y += j;
    }

    void display()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }
private:
    int x;
    int y;

};
int main() 
{
    Point p(60, 80);
    p.setPoint(20, 30);
    p.display();
    return 0;
}