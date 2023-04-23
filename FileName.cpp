#include<iostream>
using namespace std;
class point {
protected:
	int x, y;
public:
	point() {}
	point(int x, int y)
	{

	}
	void set(int a, int b)
	{
		x = a; y = b;
	}
	void show()
	{
		cout << "x=" << x << ",y=" << y << endl;
	}

};
class circle :public point {
private:
	int r;
public:
	circle(){}
	circle(int r):r(r){}
	void setcircle(int a, int b,int r)
	{
		set(a, b);
		this->r = r;
	}
	void showcircle()
	{
		cout << "圆的坐标为(" << x << "," << y << ")" << "半径为" << r << endl;
	}
	double S()
	{
		return 3.14 * r * r;
	}
};
int main()
{
	circle A(4);
	A.setcircle(1, 1,1);
	A.showcircle();
	cout << "圆的面积为" << A.S() << endl;
}
