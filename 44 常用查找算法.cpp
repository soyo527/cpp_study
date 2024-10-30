//#include<bits/stdc++.h>
//using namespace std;
//
//class Five
//{
//public:
//	bool operator()(int v)
//	{
//		return v == 5;
//	}
//};
//
//class Greater2
//{
//public:
//	bool operator()(int v)
//	{
//		return v > 2;
//	}
//};
//
//int main()
//{
//
//	//----------find函数----------
//	cout << "find函数" << endl;
//
//	vector<int> v = { 2,2,3,4,1,5,5,5 };
//	auto pos = find(v.begin(), v.end(), 3);
//	if (pos == v.end())
//	{
//		cout << "找不到！" << endl;
//	}
//	else
//	{
//		cout << "找到了：";
//		cout << *pos << endl;	//pos返回的是找的值
//	}
//
//	//----------find_if函数----------
//	cout << "find_if函数" << endl;
//
//	pos = find_if(v.begin(), v.end(), Five());
//	if (pos == v.end())
//	{
//		cout << "找不到！" << endl;
//	}
//	else
//	{
//		cout << "找到了：";
//		cout << *pos << endl;	//pos返回的是找的值
//	}
//
//	//----------adjacent_find函数----------
//	cout << "adjacent_find函数" << endl;
//
//	pos = adjacent_find(v.begin(), v.end());
//	if (pos == v.end())
//	{
//		cout << "找不到！" << endl;
//	}
//	else
//	{
//		cout << "找到了：";
//		cout << *pos << endl;	//pos返回的是第一个重复的元素
//	}
//
//	//----------adjacent_find函数----------
//	cout << "adjacent_find函数" << endl;
//	sort(v.begin(), v.end());
//
//	bool ret = binary_search(v.begin(), v.end(),2);	//二分查找，返回的是布尔值，必须是有序的
//	if (ret)
//	{
//		cout << "找到了" << endl;
//	}
//	else
//	{
//		cout << "找不到!" << endl;
//	}
//
//	//----------count函数----------
//	cout << "count函数" << endl;
//
//	int num = count(v.begin(), v.end(), 5);
//	cout << "5的个数为：" << num << endl;
//
//	//----------count_if函数----------
//	cout << "count_if函数" << endl;
//
//	num = count_if(v.begin(), v.end(), Greater2());
//	cout << "比2大的数的个数:" << num << endl;
//
//	system("pause");
//	return 0;
//}