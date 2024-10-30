//#include<bits/stdc++.h>
//using namespace std;
//
//class MyExcption :public exception
//{
//public:
//	const char* what() const throw()
//	{
//		return "异常测试";
//	}
//};
//
//double mydiv(double v1, double v2)
//{
//	if (v2 == 0)
//	{
//		throw"除数为0！"; 
//	}
//	return v1 / v2;
//}
//
//double add(double v1, double v2)
//{
//	if (v1 > 0)
//	{
//		//模拟抛出自定义异常
//		MyExcption myex;
//		throw myex;
//	}
//	return v1 + v2;
//}
//
//int main()
//{
//	int num1 = 200, num2 = 0, num3;
//
//	try
//	{
//		cout << mydiv(num1, num2) << endl;
//	}
//	catch (const char* msg)
//	{
//		cerr << msg << endl;
//	}
//
//	try
//	{
//		cout << add(num1, num2) << endl;
//	}
//	catch (exception& e)
//	{
//		cout << e.what() << endl;
//	}
//
//	system("pause");
//	return 0;
//}