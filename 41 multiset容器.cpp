//#include<bits/stdc++.h>
//using namespace std;
//
//void printMultiset(multiset<int>& ms)
//{
//	for (auto i = ms.begin(); i != ms.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//}
//
//int main()
//{
//	//Multiset是set集合容器的一种，其拥有set的全部内容，在此基础之上multiset还具备了可以重复保存元素的功能
//	//Multiset可以插入一段数据
//
//	//----------Multiset的创建----------
//	multiset<int> ms1;
//	multiset<int> ms2(ms1);
//	multiset<int> ms3 = ms1;
//
//	//----------Multiset的插入和删除----------
//	cout << "Multiset的插入和删除" << endl;
//
//	multiset<int> ms;
//	ms.insert(3);
//	ms.insert(2);
//	ms.insert(5);
//	ms.insert(4);
//	ms.insert(1);
//	ms.insert(1);
//	ms.insert(3);
//	ms2 = { 11,33,44,77 };
//	ms.insert(ms2.begin(), ms2.end());
//	ms.insert(ms.begin(), 999);
//	printMultiset(ms);
//
//	ms.erase(ms.begin());
//	printMultiset(ms);
//
//	ms.erase(ms.begin(),++ms.begin());
//	printMultiset(ms);
//
//	ms.erase(5);
//	printMultiset(ms);
//
//	//----------Multiset查找与统计----------
//	cout << "Multiset查找" << endl;
//
//	ms = { 3,1,4,2,5,4,2,9,7,2,2,2,2,2,2,2 };
//	int pos = 0;
//	for (auto i = ms.begin(); i != ms.find(9); i++, pos++);
//	cout << pos << endl;
//
//	//统计元素
//	cout << ms.count(4) << endl;
//
//	auto pos2 = ms.lower_bound(6);	//返回大于等于6的迭代器
//	cout << *pos2 << endl;
//
//	system("pause");
//	return 0;
//}