//#include<bits/stdc++.h>
//using namespace std;
//
//void myPrint(int val)
//{
//	cout << val << ' ';
//}
//
//template<class T>
//class Greater
//{
//public:
//	bool operator()(T& a, T& b)
//	{
//		return a > b;
//	}
//};
//
//int main()
//{
//	//----------sort函数----------
//	cout << "sort函数" << endl;
//
//	vector<int> v = { 2,4,8,1,5,2,4,9,10 };
//	srand(time(0));
//
//	sort(v.begin(), v.end());
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
//
//	sort(v.begin(), v.end(),Greater<int>());
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
//
//	//----------random_shuffle函数----------
//	cout << "random_shuffle函数" << endl;
//
//	random_shuffle(v.begin(), v.end());
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;		
//
//	//----------merge函数----------
//	cout << "merge函数" << endl;
//
//	//两个容器必须有序
//	vector<int> v2 = { 2,3,4,5,6,1000 };
//	vector<int> v3;
//	sort(v.begin(), v.end());
//
//	v3.resize(v.size() + v2.size());
//	merge(v.begin(), v.end(), v2.begin(), v2.end(), v3.begin());
//	for_each(v3.begin(), v3.end(), myPrint);
//	cout << endl;
//
//	//----------reverse函数----------
//	cout << "reverse函数" << endl;
//
//	reverse(v.begin(), v.end());
//	for_each(v.begin(), v.end(), myPrint);
//
//	system("pause");
//	return 0;
//}