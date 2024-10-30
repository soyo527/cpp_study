//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	//约瑟夫问题
//	//共n个人，每次数到第m个人时，这个人则会出圈，出圈后会再次从1开始数数，直至所有人都出圈，要求按顺序输出出圈人的编号
//	int n,m;
//	cin >> n;
//	cin >> m;
//	queue<int> q;
//
//	for (int i = 0; i < n; i++)
//	{
//		q.push(i+1);
//	}
//
//	while (!q.empty())
//	{
//		for (int i = 0; i < m-1; i++)
//		{
//			int x = q.front();
//			q.pop();
//			q.push(x);
//		}
//		cout << q.front() << endl;
//		q.pop();
//	}
//
//	system("pause");
//	return 0;
//}