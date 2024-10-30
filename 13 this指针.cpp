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
//			cout << "是正方形" << endl;
//		else
//			cout << "不是正方形" << endl;
//	}
//	void mianji()
//	{
//		cout << "矩形面积为：" << this->l * this->w << endl;
//	}
//private:
//	int l, w;
//};
//
//int main()
//{
//	//this指针的使用
//	Student s1("zs", 21);
//	s1.show();
//	cout << "s1->	" << &s1 << endl;
//	Student s2("abc", 20);
//	s2.show();
//	cout << "s2->	" << &s2 << endl;
//
//	//小案例矩形类
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