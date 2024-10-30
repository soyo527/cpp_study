//#include<bits/stdc++.h>
//using namespace std;
//
//class Student
//{
//public:
//	Student(string name,int age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//	friend void printName(Student);
//private:
//	string name;
//	int age;
//};
//
//void printName(Student stu)
//{
//	cout << stu.name << endl;
//}
//
//int main()
//{
//	//友元函数是定义在类外部但有权访问类的所有私有成员和保护成员，友元函数不是成员函数
//	Student s1("zzz",100);
//	printName(s1);
//
//	system("pause");
//	return 0;
//}