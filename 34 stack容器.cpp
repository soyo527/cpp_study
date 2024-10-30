//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	//----------栈的创建----------
//	stack<int> s1;
//	stack<int> s2(s1);
//	stack<int> s3 = s1;
//
//	//----------栈的数据存取----------
//	cout << "栈的数据存取" << endl;
//
//	stack<int> s;
//	//添加元素
//	s.push(111);
//	s.push(222);
//	s.push(333);
//
//	//弹出栈顶元素
//	s.pop();
//
//	//输出栈顶元素，不弹出
//	int n = s.top();
//	cout << n << endl;
//
//	//----------栈的大小操作----------
//	cout << "栈的大小操作" << endl;
//
//	cout << s.empty() << endl;	//判空
//
//	cout << s.size() << endl;
//
//	//----------栈的案例----------
//	//输入十进制，输出二进制
//	cout << endl;
//	int x;
//	cin >> x;
//	s = {};
//	while (x)
//	{
//		s.push(x % 2);
//		x /= 2;
//	}
//	while (!s.empty())
//	{
//		cout << s.top();
//		s.pop();
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}