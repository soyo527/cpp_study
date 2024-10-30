//#include<bits/stdc++.h>
//using namespace std;
//
//void printMap(multimap<int, int>& m)
//{
//	for (auto i = m.begin(); i != m.end(); i++)
//		cout << "键：" << i->first << " 值：" << i->second << endl;
//	cout << "-------------" << endl;
//}
//
//int main()
//{
//	//----------multimap的创建----------
//	multimap<int,int>m1;
//	multimap<int, int>m2(m1);
//	multimap<int, int>m3 = m2;
//
//	//----------multimap的插入删除----------
//	cout << "multimap的插入删除" << endl;
//
//	multimap<int, int> m;
//	m.insert(make_pair(1, 11));
//	m.insert(make_pair(2, 22));
//	m.insert(make_pair(3, 33));
//	m.insert(make_pair(4, 44));
//	m.insert(make_pair(5, 55));
//	m.insert(make_pair(6, 66));
//	m.insert(make_pair(7, 77));
//	m.insert(make_pair(8, 88));
//	m.insert(make_pair(9, 99));
//	printMap(m);
//
//	//指定值删除
//	m.erase(4);
//	printMap(m);
//
//	//位置删除
//	m.erase(m.begin());
//	printMap(m);
//
//	//区间删除
//	m.erase(m.begin(), m.find(5));
//	printMap(m);
//
//	//----------multimap的大小与交换----------
//	cout << "multimap的大小与交换" << endl;
//
//	//大小
//	m = { {1,11},{2,22},{3,33},{4,44},{5,55} };
//	if (m.empty())
//	{
//		cout << "m为空" << endl;
//	}
//	else
//	{
//		cout << "m不为空" << endl;
//		cout << "m的长度为" << m.size() << endl;
//	}
//
//	//交换
//	m2 = { {11,100},{22,200} };
//	
//	cout << "交换前：" << endl;
//	printMap(m);
//	printMap(m2);
//
//	m.swap(m2);
//	cout << "交换后：" << endl;
//	printMap(m);
//	printMap(m2);
//
//	//----------multimap的查找----------
//	cout << "multimap的查找" << endl;
//
//	m = { {1,11},{2,22},{3,33},{1,12},{1,15},{1,14} };
//	int pos = 0;
//	for (auto i = m.begin(); i != m.find(2); i++, pos++);
//	cout << pos+1 << endl;
//
//	cout << m.count(1) << endl;
//
//	auto range = m.equal_range(1);
//	for (auto i = range.first; i != range.second; i++)
//	{
//		cout << "键：" << i->first << ' ' << "值：" << i->second << endl;
//	}
//	
//	system("pause");
//	return 0;
//}