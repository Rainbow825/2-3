#include"iostream"
using namespace std;
double f(double x )
{
	return (x * x - 2 * x + 1);//函数部分f(x),可修改；
}
void dish(double* p1, double* p2, double* p3)//p1,p2为范围,p3为解
{
	if (f(*p1) * f(*p2) <= 0)
	{
		*p3 = (*p1 + *p2) / 2;
		while ((f(*p3) < -1e-6) || (f(*p3) > 1e-6))
		{
			*p3 = (*p1 + *p2) / 2;
			if (f(*p1) * f(*p3) > 0)
				*p1 = *p3;
			else
				*p2 = *p3;
		}
		double m = 0;
		if (*p1 > * p2)
		{
			m = *p1;
			*p1 = *p2;
			*p2 = m;
		}
		printf_s("f(x)=0在区间[%f,%f]上有一解%f", *p1, *p2, *p3);
	}
	else
		cout << "无法确定" << endl;
}
	int main()
	{
		double a,b,c;//a,b为范围,c为实数解
		cout << "请输入x的范围" << endl;
		cin >> a >> b;
		c = (a + b) / 2;
		double *p1 = &a;
		double *p2 = &b;
		double* p3 = &c;
		dish(p1, p2, p3);
	}