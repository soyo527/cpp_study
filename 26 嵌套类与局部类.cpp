//#include<bits/stdc++.h>
//using namespace std;
//
////�ⲿ��
//class OuterClass
//{
//public:
//	class InnerClass	//Ƕ����
//	{
//	public:
//		void func();	//Ƕ�����func����
//	};
//public:
//	InnerClass obj;
//	void func()		//�ⲿ���func����
//	{
//		cout << "OuterClass func" << endl;
//		obj.func();
//	}
//};
//
//void OuterClass::InnerClass::func()	//Ƕ�����func����
//{
//	cout << "InnerClass func" << endl;
//}
//
//void func()
//{
//	class LocalClass	//�ֲ���
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