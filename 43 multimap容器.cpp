//#include<bits/stdc++.h>
//using namespace std;
//
//void printMap(multimap<int, int>& m)
//{
//	for (auto i = m.begin(); i != m.end(); i++)
//		cout << "����" << i->first << " ֵ��" << i->second << endl;
//	cout << "-------------" << endl;
//}
//
//int main()
//{
//	//----------multimap�Ĵ���----------
//	multimap<int,int>m1;
//	multimap<int, int>m2(m1);
//	multimap<int, int>m3 = m2;
//
//	//----------multimap�Ĳ���ɾ��----------
//	cout << "multimap�Ĳ���ɾ��" << endl;
//
//	multimap<int, int> m;
//	m.insert(make_pair(1, 11));
//	m.insert(make_pair(2, 22));
//	m.insert(make_pair(3, 33));
//	m.insert(make_pair(4, 44));
//	m.insert(make_pair(5, 55));
//	m.insert(make_pair(6, 66));
//	m.insert(make_pair(7, 77));
//	m.insert(make_pair(8, 88));
//	m.insert(make_pair(9, 99));
//	printMap(m);
//
//	//ָ��ֵɾ��
//	m.erase(4);
//	printMap(m);
//
//	//λ��ɾ��
//	m.erase(m.begin());
//	printMap(m);
//
//	//����ɾ��
//	m.erase(m.begin(), m.find(5));
//	printMap(m);
//
//	//----------multimap�Ĵ�С�뽻��----------
//	cout << "multimap�Ĵ�С�뽻��" << endl;
//
//	//��С
//	m = { {1,11},{2,22},{3,33},{4,44},{5,55} };
//	if (m.empty())
//	{
//		cout << "mΪ��" << endl;
//	}
//	else
//	{
//		cout << "m��Ϊ��" << endl;
//		cout << "m�ĳ���Ϊ" << m.size() << endl;
//	}
//
//	//����
//	m2 = { {11,100},{22,200} };
//	
//	cout << "����ǰ��" << endl;
//	printMap(m);
//	printMap(m2);
//
//	m.swap(m2);
//	cout << "������" << endl;
//	printMap(m);
//	printMap(m2);
//
//	//----------multimap�Ĳ���----------
//	cout << "multimap�Ĳ���" << endl;
//
//	m = { {1,11},{2,22},{3,33},{1,12},{1,15},{1,14} };
//	int pos = 0;
//	for (auto i = m.begin(); i != m.find(2); i++, pos++);
//	cout << pos+1 << endl;
//
//	cout << m.count(1) << endl;
//
//	auto range = m.equal_range(1);
//	for (auto i = range.first; i != range.second; i++)
//	{
//		cout << "����" << i->first << ' ' << "ֵ��" << i->second << endl;
//	}
//	
//	system("pause");
//	return 0;
//}