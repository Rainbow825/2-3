#include"iostream"
using namespace std;
double f(double x )
{
	return (x * x - 2 * x + 1);//��������f(x),���޸ģ�
}
void dish(double* p1, double* p2, double* p3)//p1,p2Ϊ��Χ,p3Ϊ��
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
		printf_s("f(x)=0������[%f,%f]����һ��%f", *p1, *p2, *p3);
	}
	else
		cout << "�޷�ȷ��" << endl;
}
	int main()
	{
		double a,b,c;//a,bΪ��Χ,cΪʵ����
		cout << "������x�ķ�Χ" << endl;
		cin >> a >> b;
		c = (a + b) / 2;
		double *p1 = &a;
		double *p2 = &b;
		double* p3 = &c;
		dish(p1, p2, p3);
	}