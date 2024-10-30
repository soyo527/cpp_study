//#include<bits/stdc++.h>
//using namespace std;
//
//auto funcName(int v1, int v2)
//{
//	return v1 + v2;
//}
//
//int main()
//{
//	vector<int> v = { 4,6,2,7,1,8,2,6,9 };
//	for (auto i = v.begin(); i != v.end(); i++)
//	{
//		cout << *i << ' ';
//	}
//	cout << endl;
//
//	//当类型不为引用时，auto的推导结果将不保留表达式的const属性；
//	//当类型为引用时，auto的推导结果将保留表达式的const属性。
//
//	int x = 0;
//	auto* p1 = &x;	//auto推导为int
//	auto p2 = &x;	//auto推导为int*
//	auto& r1 = x;	//auto推导为int
//	auto r2 = r1;	//auto推导为int
//
//	//auto的限制（c++11）
//	//1.auto不能在函数的参数中使用
//	//2.auto不能作用于类的非静态成员变量
//	//3.auto不能作用于模板参数
//	//4.auto不能用于推导数组类型
//
//	system("pause");
//	return 0;
//}