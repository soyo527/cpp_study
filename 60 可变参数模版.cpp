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
//	cout << "�ݹ麯����ֹ" << endl;
//}
//
//template<class T, class...U>
//void funcName111(T first,U...others)
//{
//	cout << "���յ��Ĳ����ǣ�" << first << endl;
//	funcName111(others...);
//}
//
//template<class T, class...U>
//void funcName112(T first,U...args)
//{
//	cout << "���յ��Ĳ�����" << first << endl;
//	if constexpr (sizeof...(args) > 0)
//	{
//		funcName112(args...);
//	}
//}
//
////Ĭ�ϳ�Ա��������
//class ClassTest
//{
//private:
//	int n;
//public:
//	ClassTest() = default;	//Ĭ������
//	ClassTest(int num) :n(num) {}
//	ClassTest(const ClassTest&) = delete;	//Ĭ�ϲ�����
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