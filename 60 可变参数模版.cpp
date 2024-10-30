//#include<bits/stdc++.h>
//using namespace std;
//
//template<class...T>
//void func11(T...args)
//{
//	cout << sizeof...(args) << endl;
//	cout << sizeof...(T) << endl;
//}
//
//void funcName111()
//{
//	cout << "递归函数终止" << endl;
//}
//
//template<class T, class...U>
//void funcName111(T first,U...others)
//{
//	cout << "接收到的参数是：" << first << endl;
//	funcName111(others...);
//}
//
//template<class T, class...U>
//void funcName112(T first,U...args)
//{
//	cout << "接收到的参数：" << first << endl;
//	if constexpr (sizeof...(args) > 0)
//	{
//		funcName112(args...);
//	}
//}
//
////默认成员函数控制
//class ClassTest
//{
//private:
//	int n;
//public:
//	ClassTest() = default;	//默认生成
//	ClassTest(int num) :n(num) {}
//	ClassTest(const ClassTest&) = delete;	//默认不生成
//	ClassTest& operator=(const ClassTest& ct);
//};
//
//ClassTest& ClassTest::operator=(const ClassTest &ct) = default;
//
//int main()
//{
//	func11(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
//
//	funcName111(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
//
//	funcName112(1, 2, 3, 4, 5, 6, 7, 8, 9, 100);
//
//	system("pause");
//	return 0;
//}