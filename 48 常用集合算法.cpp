//#include<bits/stdc++.h>
//using namespace std;
//
//void myPrint(int val)
//{
//	cout << val << ' ';
//}
//
//int main()
//{
//	//----------set_intersection����----------
//	cout << "set_intersection����" << endl;
//
//	//�󽻼���������
//	vector<int> v1 = { 1,2,3,4,5,6,7,8 };
//	vector<int> v2 = { 2,4,6,8 };
//	vector<int> v3;
//
//	v3.resize(min(v1.size(), v2.size()));
//	auto pos = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(),v3.begin());
//	for_each(v3.begin(), pos, myPrint);	//����Ҫ��pos����ĩβ����Ȼ���ܵ��º���ļ�����Ϊ0
//	cout << endl;
//
//	//----------set_union����----------
//	cout << "set_union����" << endl;
//
//	//�ϲ�����
//	v1 = { 1,2,3,4 };
//	v2 = { 3,4,5,6 };
//	v3 = {};
//	v3.resize(v1.size() + v2.size());
//	pos = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//	for_each(v3.begin(), pos, myPrint);
//	cout << endl;
//
//	//----------set_union����----------
//	cout << "set_union����" << endl;
//
//	//��
//	v3.resize(max(v1.size(), v2.size()));
//	pos = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//	for_each(v3.begin(), pos, myPrint);
//	cout << endl;
//
//	system("pause");
//	return 0;
//}