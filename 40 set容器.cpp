//#include<bits/stdc++.h>
//using namespace std;
//
//void printSet(set<int>& s)
//{
//	for (auto i : s)
//		cout << i << ' ';
//	cout << endl;
//}
//
//int main()
//{
//	//set�ص㣺����Ԫ���Զ����򣬲������ظ���Ԫ��
//	set<int> s1 = { 3,1,5,4,2,2,3,1,1 };
//	printSet(s1);
//
//	set<int> s2(s1);
//
//	//----------set�Ĳ���----------
//	cout << "set�Ĳ���" << endl;
//	set<int> s;
//	//setֻ��һ��һ������
//	s.insert(20);
//	s.insert(10);
//	s.insert(50);
//	s.insert(30);
//	s.insert(40);
//	s.insert(20);
//	printSet(s);
//
//	//----------set��ɾ��----------
//	cout << "set��ɾ��" << endl;
//
//	s.erase(s.begin());
//	printSet(s);
//	
//	s.erase(40);
//	printSet(s);
//
//	s.erase(s.begin(), s.end());
//	printSet(s);
//
//	//----------set�Ĵ�С�뽻��----------
//	cout << "set�Ĵ�С�뽻��" << endl;
//
//	s1 = { 1,2,3,5,4,1 };
//	if (s1.empty())
//	{
//		cout << "s1.empty():" << s1.empty() << endl;
//	}
//	else
//	{
//		cout << "s1.empty():" << s1.empty() << endl;
//		cout << s1.size() << endl;
//	}
//
//	s2 = { 11,33,22,55,44 };
//
//	cout << "����ǰ��";
//	printSet(s1);
//	printSet(s2);
//
//	cout << "������";
//	s1.swap(s2);
//	printSet(s1);
//	printSet(s2);
//
//	//----------set�Ĳ�����ͳ��----------
//	cout << "set�Ĳ�����ͳ��" << endl;
//
//	s = { 3,2,1,5,4 };
//
//	//set<int>::iterator pos = s.find(3);
//	auto pos = s.find(3);
//	if (pos != s.end())
//	{
//		cout << "�ҵ���Ԫ�أ�λ���ǣ�" << *pos << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ���Ԫ�أ�" << endl;
//	}
//
//	s.insert(3);
//	s.insert(3);
//	s.insert(3);
//	cout << s.count(3) << endl;
//
//	system("pause");
//	return 0;
//}