//#include<bits/stdc++.h>
//using namespace std;
//
//class Student
//{
//public:
//	Student(string name, int age)
//	{
//		this->age = age;
//		this->name = name;
//	}
//	void show()
//	{
//		cout << "this->	" << this << endl;
//	}
//	string name;
//	int age;
//};
//
//class Rectangle
//{
//public:
//	Rectangle(int l,int w)
//	{
//		this->l = l;
//		this->w = w;
//	}
//	void panduan()
//	{
//		if (this->l == this->w)
//			cout << "��������" << endl;
//		else
//			cout << "����������" << endl;
//	}
//	void mianji()
//	{
//		cout << "�������Ϊ��" << this->l * this->w << endl;
//	}
//private:
//	int l, w;
//};
//
//int main()
//{
//	//thisָ���ʹ��
//	Student s1("zs", 21);
//	s1.show();
//	cout << "s1->	" << &s1 << endl;
//	Student s2("abc", 20);
//	s2.show();
//	cout << "s2->	" << &s2 << endl;
//
//	//С����������
//	Rectangle r1(10, 10);
//	Rectangle r2(10, 5);
//	r1.panduan();
//	r1.mianji();
//	r2.panduan();
//	r2.mianji();
//
//	system("pause");
//	return 0;
//}