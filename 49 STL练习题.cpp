//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	//Լɪ������
//	//��n���ˣ�ÿ��������m����ʱ�����������Ȧ����Ȧ����ٴδ�1��ʼ������ֱ�������˶���Ȧ��Ҫ��˳�������Ȧ�˵ı��
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