//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	//----------ջ�Ĵ���----------
//	stack<int> s1;
//	stack<int> s2(s1);
//	stack<int> s3 = s1;
//
//	//----------ջ�����ݴ�ȡ----------
//	cout << "ջ�����ݴ�ȡ" << endl;
//
//	stack<int> s;
//	//���Ԫ��
//	s.push(111);
//	s.push(222);
//	s.push(333);
//
//	//����ջ��Ԫ��
//	s.pop();
//
//	//���ջ��Ԫ�أ�������
//	int n = s.top();
//	cout << n << endl;
//
//	//----------ջ�Ĵ�С����----------
//	cout << "ջ�Ĵ�С����" << endl;
//
//	cout << s.empty() << endl;	//�п�
//
//	cout << s.size() << endl;
//
//	//----------ջ�İ���----------
//	//����ʮ���ƣ����������
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