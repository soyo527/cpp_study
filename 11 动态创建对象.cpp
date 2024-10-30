//#include<bits/stdc++.h>
//using namespace std;
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "调用Person" << endl;
//	}
//	Person(string name, int age)
//	{
//		cout << "Person方法" << endl;
//	}
//	~Person()
//	{
//		cout << "调用Person的析构函数" << endl;
//	}
//};
//
//int main()
//{
//	//new是在堆上创建变量
//	//delete表达式先调用析构函数，然后释放内存
//	
//	//----------创建一个变量指针----------
//	Person* p1 = new Person;	//必须有默认的构造函数
//
//	delete p1;
//
//	//----------创建一个动态数组----------
//	//在栈上创建数组
//	Person p2[] = {{"zs",20},{"ww",19}};
//	//在堆上创建动态数组
//	Person* p3 = new Person[20];	//必须有默认的构造函数
//
//	delete[] p3;
//
//	//----------new用于普通数组----------
//	//创建字符数组
//	char* p4 = new char[50];
//
//	//创建整形数组
//	int* p5 = new int[20];
//
//	//创建整形数组并初始化
//	int* p6 = new int[5] {1, 2, 3, 4, 5};
//
//	//释放数组内存
//	delete[] p4;
//	delete[] p5;
//	delete[] p6;
//
//
//	system("pause");
//	return 0;
//}