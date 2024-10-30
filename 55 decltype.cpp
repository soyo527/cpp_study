//#include<bits/stdc++.h>
//using namespace std;
//
//template<class R,class T,class U>
//auto add(T t, U u) -> decltype(t + u)
//{
//	return t + u;
//}
//
//int main()
//{
//	auto s1 = 100;
//	auto s2 = 200.2;
//	decltype(s1 + s2)s3;
//	//s3的类型是s1+s2后的类型
//	cout << typeid(s3).name() << endl;
//
//	auto v3 = add<decltype(s1 + s2)>(s1, s2);
//	cout << typeid(v3).name() << endl;
//
//	system("pause");
//	return 0;
//}