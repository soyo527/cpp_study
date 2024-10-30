//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	//----------创建方法----------
//	vector<int> v1 = { 1,2,3,4 };
//	vector<char> v2 = {'h','e','l','l','o'};
//	vector<string> v3 = { "hello","abc","world" };
//	
//	//构造函数创建
//	cout << "构造函数创建" << endl;
//
//	vector<int> v4(10);	//v4大小为10个int，没有元素
//
//	vector<int>v5(10, 6);	//v5是10个6
//	for (auto i : v5)
//		cout << i;
//	cout << endl;
//
//	vector<int> v6(v5);
//	for (auto i : v6)
//		cout << i;
//	cout << endl;
//
//	vector<int> v7(v5.begin(), v5.begin() + 1);	//把[v5.begin(), v5.begin() + 1)赋值给v7
//	cout << v7.size() << endl;
//
//	//----------vector的输出函数----------
//	cout << "vector的输出函数" << endl;
//
//	vector<int>v = { 1,2,3,4,5,6 };
//
//	cout << v.at(3) << endl;	//相当于v[3]
//
//	cout << v.front() << endl;	//取首元
//
//	cout << v.back() << endl;	//取末元
//
//	for (auto i = v.begin(); i != v.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	for(auto i=v.rbegin();i!=v.rend();i++)	//反向迭代
//		cout << *i << ' ';
//	cout << endl;
//
//	//----------vector的插入函数----------
//	cout << "vector的插入函数" << endl;
//
//	v = { 1,2 };
//	vector<int> v_2 = { 111,222 };
//
//	v.push_back(333);	//在末尾插入333
//
//	v.insert(v.begin(), 666);	//在开头插入666
//
//	v.insert(v.begin() + 1, 3, 999);	//在下标为1的位置插入3个999
//
//	v.insert(v.begin(), v_2.begin(), v_2.end());	//把v_2全部插入开头
//
//
//	for (auto i = v.begin(); i != v.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	//----------vector的删除函数----------
//	cout << "vector的删除函数" << endl;
//
//	v = { 1,2,3,4,5,6 };
//
//	v.erase(v.begin() + 1);	//删除下标为1的元素
//
//	v.erase(v.begin() + 2, v.begin() + 4);	//删除[2,4)元素
//
//	v.pop_back();	//删除最后一个元素
//
//	//v.clear();	//清除全部元素
//
//	for (auto i = v.begin(); i != v.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	//----------vector的判断函数----------
//	cout << "vector的判断函数" << endl;
//
//	cout << v.empty() << endl;
//
//	//----------vector的返回大小函数----------
//	cout << "vector的返回大小函数" << endl;
//
//	v = { 1,2,3,4,5,6 };
//
//	cout << v.size() << endl;
//
//	cout << v.capacity() << endl;
//
//	cout << v.max_size() << endl;
//
//	//----------vector的其余函数----------
//	cout << "vector的其余函数" << endl;
//
//	v = {};
//
//	v.assign(10, 22);	//复制10个22
//
//	for (auto i = v.begin(); i != v.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	vector<int> v_1 = { 1,2,3,4 };
//	v_2 = { 100,200,300 };
//	v_2.assign(v_1.begin(), v_1.end());		//将v_1的全部元素复制到v_2中
//
//	for (auto i = v_2.begin(); i != v_2.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	v_2 = { 100,200,300 };
//	v_1.swap(v_2);	//把两个值交换
//
//	for (auto i = v_1.begin(); i != v_1.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	for (auto i = v_2.begin(); i != v_2.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//
//	system("pause");
//	return 0;
//}