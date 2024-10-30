//#include<bits/stdc++.h>
//using namespace std;
//
//void myPrint(int val)
//{
//	cout << val << ' ';
//}
//
//int main()
//{
//	//----------set_intersection函数----------
//	cout << "set_intersection函数" << endl;
//
//	//求交集必须有序
//	vector<int> v1 = { 1,2,3,4,5,6,7,8 };
//	vector<int> v2 = { 2,4,6,8 };
//	vector<int> v3;
//
//	v3.resize(min(v1.size(), v2.size()));
//	auto pos = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(),v3.begin());
//	for_each(v3.begin(), pos, myPrint);	//必须要用pos接收末尾，不然可能导致后面的几个数为0
//	cout << endl;
//
//	//----------set_union函数----------
//	cout << "set_union函数" << endl;
//
//	//合并函数
//	v1 = { 1,2,3,4 };
//	v2 = { 3,4,5,6 };
//	v3 = {};
//	v3.resize(v1.size() + v2.size());
//	pos = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//	for_each(v3.begin(), pos, myPrint);
//	cout << endl;
//
//	//----------set_union函数----------
//	cout << "set_union函数" << endl;
//
//	//求差集
//	v3.resize(max(v1.size(), v2.size()));
//	pos = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//	for_each(v3.begin(), pos, myPrint);
//	cout << endl;
//
//	system("pause");
//	return 0;
//}