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
//		cout << "������" << this->name << ",���䣺" << this->age << endl;
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
//		cout << "ѧ������" << this->name << ",���䣺" << this->age << ",�ɼ���" << this->score << endl;
//	}
//};
//
//int main()
//{
//	//ָ��ʵ�ֶ�̬
//	Person* p1 = new Person("zxx", 20);
//	p1->info();
//	//Student* s1 = new Student("xiaoming", 11, 90);
//	//s1->info();
//	
//	//��û��ʹ���麯��������£�����Ļ�������������ѧ����
//	//��̬ʵ�ֱ���ʹ���麯��
//	p1=new Student("xiaoming", 11, 90);
//	p1->info();
//
//
//	//����ʵ�ֶ�̬
//	Person p_1("swk", 500);
//	Student s_1("bgj", 300, 99);
//	Person& pper = p_1;
//	Person& pstu = s_1;
//	pper.info();
//	pstu.info();
//
//	//���캯�������Ա�����Ϊ�麯���������������Ա�����Ϊ�麯����������ʱ���������Ϊ�麯��
//	//����������������������һ��Ϊ�麯��������ᵼ������û���ͷţ�����ڴ�й©
//
//	system("pause");
//	return 0;
//}