//#include<bits/stdc++.h>
//using namespace std;
//
//class Five
//{
//public:
//	bool operator()(int v)
//	{
//		return v == 5;
//	}
//};
//
//class Greater2
//{
//public:
//	bool operator()(int v)
//	{
//		return v > 2;
//	}
//};
//
//int main()
//{
//
//	//----------find����----------
//	cout << "find����" << endl;
//
//	vector<int> v = { 2,2,3,4,1,5,5,5 };
//	auto pos = find(v.begin(), v.end(), 3);
//	if (pos == v.end())
//	{
//		cout << "�Ҳ�����" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��ˣ�";
//		cout << *pos << endl;	//pos���ص����ҵ�ֵ
//	}
//
//	//----------find_if����----------
//	cout << "find_if����" << endl;
//
//	pos = find_if(v.begin(), v.end(), Five());
//	if (pos == v.end())
//	{
//		cout << "�Ҳ�����" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��ˣ�";
//		cout << *pos << endl;	//pos���ص����ҵ�ֵ
//	}
//
//	//----------adjacent_find����----------
//	cout << "adjacent_find����" << endl;
//
//	pos = adjacent_find(v.begin(), v.end());
//	if (pos == v.end())
//	{
//		cout << "�Ҳ�����" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��ˣ�";
//		cout << *pos << endl;	//pos���ص��ǵ�һ���ظ���Ԫ��
//	}
//
//	//----------adjacent_find����----------
//	cout << "adjacent_find����" << endl;
//	sort(v.begin(), v.end());
//
//	bool ret = binary_search(v.begin(), v.end(),2);	//���ֲ��ң����ص��ǲ���ֵ�������������
//	if (ret)
//	{
//		cout << "�ҵ���" << endl;
//	}
//	else
//	{
//		cout << "�Ҳ���!" << endl;
//	}
//
//	//----------count����----------
//	cout << "count����" << endl;
//
//	int num = count(v.begin(), v.end(), 5);
//	cout << "5�ĸ���Ϊ��" << num << endl;
//
//	//----------count_if����----------
//	cout << "count_if����" << endl;
//
//	num = count_if(v.begin(), v.end(), Greater2());
//	cout << "��2������ĸ���:" << num << endl;
//
//	system("pause");
//	return 0;
//}