//#include<bits/stdc++.h>
//using namespace std;
//
//auto funcName(int v1, int v2)
//{
//	return v1 + v2;
//}
//
//int main()
//{
//	vector<int> v = { 4,6,2,7,1,8,2,6,9 };
//	for (auto i = v.begin(); i != v.end(); i++)
//	{
//		cout << *i << ' ';
//	}
//	cout << endl;
//
//	//�����Ͳ�Ϊ����ʱ��auto���Ƶ���������������ʽ��const���ԣ�
//	//������Ϊ����ʱ��auto���Ƶ�������������ʽ��const���ԡ�
//
//	int x = 0;
//	auto* p1 = &x;	//auto�Ƶ�Ϊint
//	auto p2 = &x;	//auto�Ƶ�Ϊint*
//	auto& r1 = x;	//auto�Ƶ�Ϊint
//	auto r2 = r1;	//auto�Ƶ�Ϊint
//
//	//auto�����ƣ�c++11��
//	//1.auto�����ں����Ĳ�����ʹ��
//	//2.auto������������ķǾ�̬��Ա����
//	//3.auto����������ģ�����
//	//4.auto���������Ƶ���������
//
//	system("pause");
//	return 0;
//}