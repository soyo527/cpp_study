//#include<bits/stdc++.h>
//using namespace std;
//
////外部类
//class OuterClass
//{
//public:
//	class InnerClass	//嵌套类
//	{
//	public:
//		void func();	//嵌套类的func方法
//	};
//public:
//	InnerClass obj;
//	void func()		//外部类的func方法
//	{
//		cout << "OuterClass func" << endl;
//		obj.func();
//	}
//};
//
//void OuterClass::InnerClass::func()	//嵌套类的func方法
//{
//	cout << "InnerClass func" << endl;
//}
//
//void func()
//{
//	class LocalClass	//局部类
//	{
//	public:
//		int num;
//		void setNum(int n)
//		{
//			num = n;
//		}
//		void showName()
//		{
//			cout << "num=" << num << endl;
//		}
//	};
//
//	LocalClass lc;
//	lc.setNum(111);
//	lc.showName();
//}
//
//int main()
//{
//	OuterClass oc1;
//	oc1.func();
//	cout << "**************" << endl;
//	OuterClass::InnerClass ic1;
//	ic1.func();
//	cout << "**************" << endl;
//	func();
//
//
//	system("pause");
//	return 0;
//}