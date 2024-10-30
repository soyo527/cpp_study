//#include<bits/stdc++.h>
//using namespace std;
//
//void printSet(set<int>& s)
//{
//	for (auto i : s)
//		cout << i << ' ';
//	cout << endl;
//}
//
//int main()
//{
//	//set特点：所用元素自动排序，不会有重复的元素
//	set<int> s1 = { 3,1,5,4,2,2,3,1,1 };
//	printSet(s1);
//
//	set<int> s2(s1);
//
//	//----------set的插入----------
//	cout << "set的插入" << endl;
//	set<int> s;
//	//set只能一个一个插入
//	s.insert(20);
//	s.insert(10);
//	s.insert(50);
//	s.insert(30);
//	s.insert(40);
//	s.insert(20);
//	printSet(s);
//
//	//----------set的删除----------
//	cout << "set的删除" << endl;
//
//	s.erase(s.begin());
//	printSet(s);
//	
//	s.erase(40);
//	printSet(s);
//
//	s.erase(s.begin(), s.end());
//	printSet(s);
//
//	//----------set的大小与交换----------
//	cout << "set的大小与交换" << endl;
//
//	s1 = { 1,2,3,5,4,1 };
//	if (s1.empty())
//	{
//		cout << "s1.empty():" << s1.empty() << endl;
//	}
//	else
//	{
//		cout << "s1.empty():" << s1.empty() << endl;
//		cout << s1.size() << endl;
//	}
//
//	s2 = { 11,33,22,55,44 };
//
//	cout << "交换前：";
//	printSet(s1);
//	printSet(s2);
//
//	cout << "交换后：";
//	s1.swap(s2);
//	printSet(s1);
//	printSet(s2);
//
//	//----------set的查找与统计----------
//	cout << "set的查找与统计" << endl;
//
//	s = { 3,2,1,5,4 };
//
//	//set<int>::iterator pos = s.find(3);
//	auto pos = s.find(3);
//	if (pos != s.end())
//	{
//		cout << "找到该元素，位置是：" << *pos << endl;
//	}
//	else
//	{
//		cout << "未找到该元素！" << endl;
//	}
//
//	s.insert(3);
//	s.insert(3);
//	s.insert(3);
//	cout << s.count(3) << endl;
//
//	system("pause");
//	return 0;
//}