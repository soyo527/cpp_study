//#include<bits/stdc++.h>
//using namespace std;
//
//class Student
//{
//public:
//	Student()
//	{
//
//	}
//	Student(string name, int age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//public:
//	static void sayHello()
//	{
//		cout << "sayHello" << endl;
//		cout << course << endl;
//		//cout << age << endl;	不能访问非静态成员变量
//	}
//	//常成员函数可以访问类中的	所有成员变量，不可以修改他们的值，主要是为了保护数据而设置的
//	void sayHi()const
//	{
//		cout << "sayHi" << name << course << age << endl;
//	}
//public:
//	int age;
//	string name;
//	static string course;
//};
//
//string Student::course="c++";
//
//int main()
//{
//	//静态成员变量
//	cout << Student::course << endl;
//	Student s1;
//	cout << s1.course << endl;
//
//	//静态成员函数
//	Student::sayHello();
//	s1.sayHello();
//
//	//常成员函数
//	Student s2("zs", 21);
//	s2.sayHi();
//	system("pause");
//	return 0;
//}