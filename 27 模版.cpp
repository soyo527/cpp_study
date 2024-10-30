//#include<bits/stdc++.h>
//using namespace std;
//
//template<typename T,class H>
//T add(T& v1, H& v2)
//{
//	return v1 + v2;
//}
//
//template<class T>
//void change(T& x, T& y)
//{
//	x += y;
//	y = x - y;
//	x = x - y;
//}
//
//int main()
//{
//	//加法
//	int n1 = 100, n2 = 200;
//	int n3=add(n1, n2);
//	cout << n3 << endl;
//
//	double d1 = 1.23, d2 = 3.213;
//	double d3 = add(d1, d2);
//	cout << d3 << endl;
//
//	//在模版中，一般不能进行类型转换
//	double d4 = add(n1, d1);
//	cout << d4 << endl;
//
//
//	//交换
//	int a = 100, b = 200;
//	change(a, b);
//	cout << a << endl << b << endl;
//
//	double x = 1.111, y = 2.222;
//	change(x, y);
//	cout << x << endl << y << endl;
//
//	system("pause");
//	return 0;
//}