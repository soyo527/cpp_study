//#include<bits/stdc++.h>
//using namespace std;
//
////animal����
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
//		cout << "���ֽУ�" << this->name << " �����ǣ�" << this->age << endl;
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
////���ּ̳з�ʽ
////Person����
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
//	//�������캯���Ĺ�����ͬ
//	Pesron(string name, int age, double height) :name(name), age(age), height(height) {}
//	/*Pesron(string name, int age,double height)
//	{
//		this->name = name;
//		this->age = age;
//		this->height = height;
//	}*/
//
//	//ͨ��setName������name��Ա������ֵ
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
//		cout << "���֣�" << this->name << " ���䣺" << this->age << " ��ߣ�" << this->height << endl;
//	}
//};
//
//class Student :public Pesron
//{
//public:
//	//ʹ��using Person::Person;�����Զ��ش�Person��̳������еĹ��캯��
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
//	//������̳�
//	Animal a1("wukong", 500);
//	a1.printInfo();
//
//	Dog d1("wangcai", 3, 'F');
//	d1.printInfo();
//
//	//����̳�
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
//	//�����������ʱ���ȵ��ø���Ĺ��캯���ٵ�������Ĺ��캯���������������ʱ����ʼ���Ҹ���û��Ĭ�Ϲ��캯��������ʧ��
//	//�ͷŶ���ʱ���ȵ���������������ٵ��ø��������
//
//	system("pause");
//	return 0;
//}