#include"iostream"
using namespace std;
float checkAgeScore(int age, float score)
{
	if ((age < 16) || (age > 25))
		throw age;
	if ((score < 0.0) || (score > 5.0))
		throw score;
	return score;

}
int main()
{
	char name[10];
	int age;
	float score;
	cout << "������ѧ�������� ���� �ɼ�" << endl;
	cin >> name >> age >> score;
	try
	{
		cout <<"name:"<<name<<"age"<<age<< "score:" << checkAgeScore(age, score);
	}
	catch (float)
	{
		cout << "�ɼ��������䲻����,����������" << endl;
	}

	return 0;
}


//�α���������д��ʵ�鱨����
/*int divide(int x,int y)
{
	if (y == 0) throw y;
	return x / y;
}
int main()
{
	int x, y;
	x = 10, y = 0;
	//cin >> x >> y;
	try
	{
		cout << "a/b=" << divide(x,y) << endl;
	}
	catch (int)
	{
		cout << "�� bug" << endl;
	}
	return 0;
}*/