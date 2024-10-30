//#include<bits/stdc++.h>
//using namespace std;
//
//class Person
//{
//protected:
//	string name;
//	int age;
//public:
//	Person(){}
//	Person(string name,int age):name(name),age(age){}
//	virtual void info()
//	{
//		cout << "人名：" << this->name << ",年龄：" << this->age << endl;
//	}
//};
//
//class Student :public Person
//{
//protected:
//	double score;
//public:
//	Student() {}
//	Student(string name,int age,double score):Person(name,age),score(score){}
//	virtual void info()
//	{
//		cout << "学生名：" << this->name << ",年龄：" << this->age << ",成绩：" << this->score << endl;
//	}
//};
//
//int main()
//{
//	//指针实现多态
//	Person* p1 = new Person("zxx", 20);
//	p1->info();
//	//Student* s1 = new Student("xiaoming", 11, 90);
//	//s1->info();
//	
//	//在没用使用虚函数的情况下，输出的还是人名，不是学生名
//	//多态实现必须使用虚函数
//	p1=new Student("xiaoming", 11, 90);
//	p1->info();
//
//
//	//引用实现多态
//	Person p_1("swk", 500);
//	Student s_1("bgj", 300, 99);
//	Person& pper = p_1;
//	Person& pstu = s_1;
//	pper.info();
//	pstu.info();
//
//	//构造函数不可以被声明为虚函数，析构函数可以被声明为虚函数，并且有时候必须声明为虚函数
//	//用来做基类的类的析构函数一般为虚函数，否则会导致子类没有释放，造成内存泄漏
//
//	system("pause");
//	return 0;
//}