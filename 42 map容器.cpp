//#include<bits/stdc++.h>
//using namespace std;
//
//void printMap(map<int, int>& m)
//{
//	for (auto i = m.begin(); i != m.end(); i++)
//		cout << "����" << i->first << " ֵ��" << i->second <<' ';
//	cout << endl;
//}
//
//int main()
//{
//	//----------Pair���÷�----------
//	cout << "Pair���÷�" << endl;
//
//	//ǰ����key��������value
//	pair<int, int>p1;
//	pair<int, char>p2;
//	pair<int, int>p3(10, 20);
//
//	pair<string, int>p_1("�����", 17);
//	cout << p_1.first << p_1.second << endl;
//
//	//�������ָ�ֵ�Ĳ��������һ��
//	pair<int, int>p_2;
//	p_2.first = 10;
//	p_2.second = 20;
//	p_2 = make_pair(10, 20);	//������pair<int,int>(10,20)
//
//	//----------map�Ĵ���----------
//	cout << "map�Ĵ���" << endl;
//
//	//map<int, int> m = { pair<int, int>(1, 10),pair<int, int>(2, 20) };
//	map<int, int> m = { {1,10},{2,20} };
//	//m.insert(pair<int, int>(1, 10));
//	map<int, int>m2(m);
//	map<int, int>m3 = m2;
//
//	auto mt = m.begin();
//	cout << mt->first << ' ' << mt->second << endl;
//
//	//----------map�Ĵ�С�뽻��----------
//	cout << "map�Ĵ�С�뽻��" << endl;
//
//	map<int, int> m1 = { {4,400},{ 1,100 },{2,200},{3,300} };
//	m2 = { {66,666},{ 11,111 },{22,222},{33,333} };
//
//	printMap(m1);
//
//	//�п�
//	if (m1.empty())
//	{
//		cout << "m1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "m1��Ϊ��" << endl;
//		cout << "m1�Ĵ�СΪ��" << m1.size() << endl;
//	}
//
//	cout << "����ǰ��" << endl;
//	printMap(m1);
//	printMap(m2);
//
//	m1.swap(m2);
//	cout << "������" << endl;
//	printMap(m1);
//	printMap(m2);
//
//	//----------map�Ĳ���ɾ��----------
//	cout << "map�Ĳ���ɾ��" << endl;
//
//	//����
//	m1 = {};
//	m1.insert(pair<int, int>(1, 11));
//	printMap(m1);
//
//	m1.insert(make_pair(2, 22));
//	printMap(m1);
//
//	m1.insert(map<int, int>::value_type(3,33));
//	printMap(m1);
//
//	//****************���ַ�����ˢ��ʱ���õ�����������2006
//
//	m1[4] = 44;	//key�����ھʹ��������ھ��޸�value
//	printMap(m1);
//
//	//ɾ��
//	m1.erase(m1.begin());
//	printMap(m1);
//
//	m1.erase(2);		//����keyɾ��
//	printMap(m1);
//
//	m1.erase(m1.begin(), m1.end());
//	printMap(m1);
//
//	//----------map�Ĳ�����ͳ��----------
//	cout << "map�Ĳ�����ͳ��" << endl;
//	
//	m = { {1,11}, {2,22},{3,33} };
//	//map<int, int>::iterator it = m.find(3);
//	auto it = m.find(3);
//	if (it != m.end())
//	{
//		cout << it->first << " " << it->second << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//
//	//��ĳ��key����λ��
//	int pos = 0;
//	for (auto i = m.begin(); i != m.find(2); i++, pos++);
//	cout << pos+1 << endl;
//
//	cout << m.count(1) << endl;
//
//	system("pause");
//	return 0;
//}