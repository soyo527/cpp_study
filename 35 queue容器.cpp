//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	//----------队列的创建----------
//	queue<int> q1;
//	queue<int> q2(q1);
//	queue<int> q3 = q1;
//
//	queue<int> q;
//
//	//判空
//	cout << q.empty() << endl;
//	
//	//入队
//	q.push(111);
//	q.push(222);
//	q.push(333);
//	q.push(444);
//	q.push(555);
//	cout << q.size() << endl;
//
//	//返回队头元素
//	int n1 = q.front();
//	cout << n1 << endl;
//
//	//返回队尾元素
//	int n2 = q.back();
//	cout << n2 << endl;
//
//	//出队队头元素
//	q.pop();
//	cout << q.front() << endl;
//
//	//循环出队
//	while (!q.empty())
//	{
//		cout << q.front() << endl;
//		q.pop();
//	}
//
//	//----------队列案例----------
//	cout << "队列案例" << endl;
//
//	//n张扑克牌，奇数输出，偶数放到队尾
//	q = {};
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int x;
//		cin >> x;
//		q.push(x);
//	}
//	int flag = 1;
//	while (!q.empty())
//	{
//		if ((flag & 1) == 1)
//		{
//			cout << q.front() << endl;
//			q.pop();
//		}
//		else
//		{
//			int a = q.front();
//			q.pop();
//			q.push(a);
//		}
//		flag++;
//	}
//
//	system("pause");
//	return 0;
//}