//#include<bits/stdc++.h>
//using namespace std;
//
//class Student
//{
//public:
//	string name;
//	int age;
//	Student(string name, int age)
//	{
//		this->age = age;
//		this->name = name;
//	}
//
//	void operator=(const Student& t)
//	{
//		this->name = t.name;
//		this->age = t.age;
//	}
//
//	bool operator>(Student& t)
//	{
//		if (this->name > t.name)
//			return true;
//		else
//			return false;
//	}
//
//	bool operator<(Student& t)
//	{
//		if (this->name < t.name)
//			return true;
//		else
//			return false;
//	}
//
//	void printInfo()
//	{
//		cout << this->name << " " << this->age << endl;
//	}
//};
//
//class Complex
//{
//public:
//	double r, i;
//	Complex() {}
//	Complex(double r, double i)
//	{
//		this->r = r;
//		this->i = i;
//	}
//
//	Complex operator+(Complex& c)
//	{
//		Complex c2;
//		c2.i = this->i + c.i;
//		c2.r = this->r + c.r;
//		return c2;
//	}
//
//	Complex operator-(Complex& c)
//	{
//		Complex c2;
//		c2.i = this->i - c.i;
//		c2.r = this->r - c.r;
//		return c2;
//	}
//
//	void printInfo()
//	{
//		cout << this->r << " " << this->i << endl;
//	}
//};
//
//
//const int SIZE = 5;
//class safeArr
//{
//public:
//	int arr[SIZE];
//	safeArr()
//	{
//		register int i = 0;
//		for (; i < SIZE; i++)
//		{
//			arr[i] = i;
//		}
//	}
//	int  operator[](int i)
//	{
//		if (i >= SIZE)
//		{
//			cout << "下标越界" << endl;
//			return -1;
//		}
//		else
//			return arr[i];
//	}
//};
//
//int main()
//{
//	//=的重载
//	Student s1("zs", 20), s2("ww", 19);
//	s1.printInfo();
//	s2 = s1;
//	s2.printInfo();
//
//	cout << endl;
//
//	//+-的重载
//	Complex c1(11, 12), c2(10, 11), c3, c4;
//	c3 = c1 + c2;
//	c3.printInfo();
//
//	c4 = c1 - c2;
//	c4.printInfo();
//
//	cout << endl;
//
//	//<>的重载
//	s2.name = "ww";
//	if (s1 > s2)
//	{
//		cout << "s1>s2" << endl;
//	}
//	else if (s1 < s2)
//	{
//		cout << "s1<s2" << endl;
//	}
//
//	cout << endl;
//
//	//[]的重载（比较特殊）
//	safeArr arr;
//	cout << arr[3] << endl;
//	cout << arr[100] << endl;
//
//	system("pause");
//	return 0;
//}