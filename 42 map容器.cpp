//#include<bits/stdc++.h>
//using namespace std;
//
//void printMap(map<int, int>& m)
//{
//	for (auto i = m.begin(); i != m.end(); i++)
//		cout << "键：" << i->first << " 值：" << i->second <<' ';
//	cout << endl;
//}
//
//int main()
//{
//	//----------Pair的用法----------
//	cout << "Pair的用法" << endl;
//
//	//前面是key，后面是value
//	pair<int, int>p1;
//	pair<int, char>p2;
//	pair<int, int>p3(10, 20);
//
//	pair<string, int>p_1("诸葛亮", 17);
//	cout << p_1.first << p_1.second << endl;
//
//	//下面两种赋值的操作结果都一样
//	pair<int, int>p_2;
//	p_2.first = 10;
//	p_2.second = 20;
//	p_2 = make_pair(10, 20);	//或者是pair<int,int>(10,20)
//
//	//----------map的创建----------
//	cout << "map的创建" << endl;
//
//	//map<int, int> m = { pair<int, int>(1, 10),pair<int, int>(2, 20) };
//	map<int, int> m = { {1,10},{2,20} };
//	//m.insert(pair<int, int>(1, 10));
//	map<int, int>m2(m);
//	map<int, int>m3 = m2;
//
//	auto mt = m.begin();
//	cout << mt->first << ' ' << mt->second << endl;
//
//	//----------map的大小与交换----------
//	cout << "map的大小与交换" << endl;
//
//	map<int, int> m1 = { {4,400},{ 1,100 },{2,200},{3,300} };
//	m2 = { {66,666},{ 11,111 },{22,222},{33,333} };
//
//	printMap(m1);
//
//	//判空
//	if (m1.empty())
//	{
//		cout << "m1为空" << endl;
//	}
//	else
//	{
//		cout << "m1不为空" << endl;
//		cout << "m1的大小为：" << m1.size() << endl;
//	}
//
//	cout << "交换前：" << endl;
//	printMap(m1);
//	printMap(m2);
//
//	m1.swap(m2);
//	cout << "交换后：" << endl;
//	printMap(m1);
//	printMap(m2);
//
//	//----------map的插入删除----------
//	cout << "map的插入删除" << endl;
//
//	//插入
//	m1 = {};
//	m1.insert(pair<int, int>(1, 11));
//	printMap(m1);
//
//	m1.insert(make_pair(2, 22));
//	printMap(m1);
//
//	m1.insert(map<int, int>::value_type(3,33));
//	printMap(m1);
//
//	//****************这种方法在刷题时会用到，比如力扣2006
//
//	m1[4] = 44;	//key不存在就创建，存在就修改value
//	printMap(m1);
//
//	//删除
//	m1.erase(m1.begin());
//	printMap(m1);
//
//	m1.erase(2);		//根据key删除
//	printMap(m1);
//
//	m1.erase(m1.begin(), m1.end());
//	printMap(m1);
//
//	//----------map的查找与统计----------
//	cout << "map的查找与统计" << endl;
//	
//	m = { {1,11}, {2,22},{3,33} };
//	//map<int, int>::iterator it = m.find(3);
//	auto it = m.find(3);
//	if (it != m.end())
//	{
//		cout << it->first << " " << it->second << endl;
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//
//	//找某个key所在位置
//	int pos = 0;
//	for (auto i = m.begin(); i != m.find(2); i++, pos++);
//	cout << pos+1 << endl;
//
//	cout << m.count(1) << endl;
//
//	system("pause");
//	return 0;
//}