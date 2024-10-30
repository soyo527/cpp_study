//#include<bits/stdc++.h>
//using namespace std;
//
//int cmp(const int& v1, const int& v2)
//{
//	return v1 > v2;
//}
//
//int main()
//{
//	//----------list的初始化----------
//	list<int> l1;	//创建一个空链表
//	list<int> l2(10);	//创建一个有10个元素的链表
//	list<int> l3(l2);	//拷贝构造
//	list<int> l4(10, 22);	//10个22
//	list<int> l5(l4.begin(), l4.end());	
//	list<int> l6 = l5;
//
//	list<int> lst = { 1,2,3,4,5 };
//
//	//----------list的插入删除----------
//	cout << "list的插入删除" << endl;
//
//	lst.push_front(100);	//在开头插入100
//	lst.pop_front();	//删除头部元素
//	lst.push_back(200);	//尾部插入
//	lst.pop_back();	//删除尾部元素
//
//	//insert插入
//	lst = { 1,2,3 };
//
//	lst.insert(lst.begin(), 100);	//在头部插入100
//
//	lst.insert(lst.begin(), 5, 200);	//在头部插入5个200
//
//	list<int> lst2(2, 300);
//	lst.insert(lst.begin(), lst2.begin(), lst2.end());	//把lst2的所有元素插入lst的前面
//	
//	//注意：list是双向链表，因此不能使用begin()+2这样的语句
//
//	for (auto i = lst.begin(); i != lst.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	//earse删除
//	lst = { 1,2,3,4,5 };
//
//	lst.erase(lst.begin());	//删除首元
//
//	lst.erase(lst.begin(), --lst.end());	//删除除了最后一个元素的其他元素
//
//	//要删除某个特定的区域要用it迭代器--it到想要删除的位置
//
//
//	for (auto i = lst.begin(); i != lst.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//	
//	//----------list的输出----------
//	cout << "list的输出" << endl;
//
//	for (list<int>::iterator it = lst.begin(); it != lst.end(); it++)
//		cout << *it << ' ';
//	cout << endl;
//
//	for (auto i = lst.begin(); i != lst.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	//----------list的排序----------
//	cout << "list的排序" << endl;
//
//	list<int> lst1 = { 11,2,5,3,1,9 };
//	lst2 = lst1;
//
//	cout << "排序前：";
//	for (auto i = lst1.begin(); i != lst1.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	cout << "排序后：";
//	lst1.sort();
//	for (auto i = lst1.begin(); i != lst1.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	//两种降序排序的方法
//	cout << "颠倒后：";
//	lst1.reverse();
//	for (auto i = lst1.begin(); i != lst1.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	lst2.sort(cmp);
//	for (auto i = lst2.begin(); i != lst2.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	system("pause");
//	return 0;
//}