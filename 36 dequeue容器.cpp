//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	//----------双端队列的创建----------
//	deque<int> d1;
//	deque<int> d2(10);	//初始化长度为10
//	deque<int> d3(10, 1);	//长度为10，值为1 
//	deque<int> d4(d3);
//	deque<int> d5(d3.begin(), d3.begin() + 3);	//使用迭代器初始化，将[d3.begin(), d3.begin() + 3)中元素拷贝给本身
//
//	for (auto i = d5.begin(); i != d5.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	//----------双端队列的添加函数----------
//	cout << "双端队列的添加函数" << endl;
//
//	d1 = {};
//	//队头添加元素
//	d1.push_front(4);
//	//队尾添加元素
//	d1.push_back(5);
//	
//	deque<int>::iterator it = d1.begin();
//	d1.insert(it,2);
//	
//	d1.insert(d1.begin(), 3, 9);	//在begin插入3个9
//
//	d2 = {11,22};
//	d1.insert(d1.begin(), d2.end() - 1, d2.end());	//在begin插入d2中的最后一个元素
//
//	//迭代输出d1元素
//	for (auto i = d1.begin(); i != d1.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	//----------双端队列的删除函数----------
//	cout << "双端队列的删除函数" << endl;
//
//	d1 = {};
//	for (int i = 0; i < 10; i++)
//		d1.push_back(i);
//
//	//头部出队
//	d1.pop_front();	//删除第一个元素
//
//	//尾部出队
//	d1.pop_back();	//删除最后一个元素
//
//	deque<int>::iterator it1=d1.begin();
//	d1.erase(it1);		//删除第一个元素
//
//	d1.erase(d1.begin(), d1.begin() + 2);		//删除[d1.begin(), d1.begin() + 2)的元素
//
//	for (auto i = d1.begin(); i != d1.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	//清除所有元素
//	d1.clear();
//
//	//----------双端队列的访问函数----------
//	cout << "双端队列的访问函数" << endl;
//
//	d1 = { 1,2,3,4,5,6 };
//	
//	//通过下标访问
//	cout << d1[2] << endl;
//
//	//通过at函数访问
//	cout << d1.at(4) << endl;
//
//	//访问队头
//	cout << d1.front() << endl;
//
//	//访问队尾
//	cout << d1.back() << endl;
//
//	//----------双端队列的容量函数----------
//	cout << "双端队列的容量函数" << endl;
//
//	d1 = { 1,2,3,4,5 };
//
//	//元素个数
//	cout << d1.size() << endl;
//	cout << d1.max_size() << endl;
//
//	//修改元素大小
//	d1.resize(0);
//	cout << d1.size() << endl;
//
//	if (d1.empty())
//		cout << "没有元素了！" << endl;
//
//	//----------双端队列的其他函数----------
//	cout << "双端队列的其他函数" << endl;
//
//	d1 = {};
//	d1.assign(3, 1);	//给前三个元素赋值为1
//	d2 = {};
//	d2.assign(3, 2);
//
//	for (auto i = d1.begin(); i != d1.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	for (auto i = d2.begin(); i != d2.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	//交换两个队列的元素
//	d1.swap(d2);
//
//	for (auto i = d1.begin(); i != d1.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	for (auto i = d2.begin(); i != d2.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	system("pause");
//	return 0;
//}