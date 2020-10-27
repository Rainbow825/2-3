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
	cout << "请输入学生的姓名 年龄 成绩" << endl;
	cin >> name >> age >> score;
	try
	{
		cout <<"name:"<<name<<"age"<<age<< "score:" << checkAgeScore(age, score);
	}
	catch (float)
	{
		cout << "成绩，或年龄不合理,请重新输入" << endl;
	}

	return 0;
}


//课本例题无需写在实验报告上
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
		cout << "有 bug" << endl;
	}
	return 0;
}*/