//#include<bits/stdc++.h>
//using namespace std;
//
//class Teacher
//{
//private:
//	string t_name;
//	int t_age;
//public:
//	Teacher(string name, int age)
//	{
//		this->t_name = name;
//		this->t_age = age;
//	}
//	friend class Student;
//};
//
//class Student
//{
//private:
//	string s_name;
//	int s_age;
//public:
//	Student(string name, int age)
//	{
//		this->s_name = name;
//		this->s_age = age;
//	}
//	void stu_print(Teacher& t)
//	{
//		cout << this->s_name << endl;
//		cout << t.t_name << endl;
//	}
//};
//
//int main()
//{
//	Student s1("zs", 22);
//	Teacher t1("tea", 50);
//	s1.stu_print(t1);
//
//	system("pause");
//	return 0;
//}