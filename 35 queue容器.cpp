//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	//----------���еĴ���----------
//	queue<int> q1;
//	queue<int> q2(q1);
//	queue<int> q3 = q1;
//
//	queue<int> q;
//
//	//�п�
//	cout << q.empty() << endl;
//	
//	//���
//	q.push(111);
//	q.push(222);
//	q.push(333);
//	q.push(444);
//	q.push(555);
//	cout << q.size() << endl;
//
//	//���ض�ͷԪ��
//	int n1 = q.front();
//	cout << n1 << endl;
//
//	//���ض�βԪ��
//	int n2 = q.back();
//	cout << n2 << endl;
//
//	//���Ӷ�ͷԪ��
//	q.pop();
//	cout << q.front() << endl;
//
//	//ѭ������
//	while (!q.empty())
//	{
//		cout << q.front() << endl;
//		q.pop();
//	}
//
//	//----------���а���----------
//	cout << "���а���" << endl;
//
//	//n���˿��ƣ����������ż���ŵ���β
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