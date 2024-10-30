//#include<bits/stdc++.h>
//using namespace std;
//
////animal基类
//class Animal
//{
//public:
//	string name;
//	int age;
//	Animal(){}
//	Animal(string name, int age)
//	{
//		this->age = age;
//		this->name = name;
//	}
//	void printInfo()
//	{
//		cout << "名字叫：" << this->name << " 年龄是：" << this->age << endl;
//	}
//};
//
//class Dog :public Animal
//{
//public:
//	Dog(){}
//	Dog(string name, int age, char sex)
//	{
//		this->name = name;
//		this->age = age;
//		this->sex = sex;
//	}
//	char sex;
//};
//
//
////三种继承方式
////Person基类
//class Pesron
//{
//public:
//	string name;
//protected:
//	int age;
//private:
//	double height;
//public:
//
//	Pesron(){}
//
//	//两个构造函数的功能相同
//	Pesron(string name, int age, double height) :name(name), age(age), height(height) {}
//	/*Pesron(string name, int age,double height)
//	{
//		this->name = name;
//		this->age = age;
//		this->height = height;
//	}*/
//
//	//通过setName方法给name成员变量赋值
//	void setName(string name)
//	{
//		this->name = name;
//	}
//	void setAge(int age)
//	{
//		this->age = age;
//	}
//	void setHeight(double height)
//	{
//		this->height = height;
//	}
//
//	void printInfo()
//	{
//		cout << "名字：" << this->name << " 年龄：" << this->age << " 身高：" << this->height << endl;
//	}
//};
//
//class Student :public Pesron
//{
//public:
//	//使用using Person::Person;可以自动地从Person类继承其所有的构造函数
//	using Pesron::Pesron;
//
//	double score;
//
//	//Student() {}
//	//Student(string name, int age, double height, double score) :Pesron(name, age, height), score(score) {}
//
//};
//
//int main()
//{
//	//动物类继承
//	Animal a1("wukong", 500);
//	a1.printInfo();
//
//	Dog d1("wangcai", 3, 'F');
//	d1.printInfo();
//
//	//人类继承
//	Student s1;
//	s1.setName("xm");
//	s1.setAge(20);
//	s1.setHeight(1.7);
//	s1.printInfo();
//	
//
//	Pesron p1("zxx", 20, 1.9);
//	p1.printInfo();
//
//
//	Student s2;
//	//Student s3("xiaoming", 11, 1.5, 99);
//	//s3.printInfo();
//
//	//创建子类对象时，先调用父类的构造函数再调用子类的构造函数。如果创建对象时不初始化且父类没有默认构造函数，编译失败
//	//释放对象时，先调用子类的析构，再调用父类的析构
//
//	system("pause");
//	return 0;
//}