//#include<bits/stdc++.h>
//using namespace std;
//
//int cmp(const int& v1, const int& v2)
//{
//	return v1 > v2;
//}
//
//int main()
//{
//	//----------list�ĳ�ʼ��----------
//	list<int> l1;	//����һ��������
//	list<int> l2(10);	//����һ����10��Ԫ�ص�����
//	list<int> l3(l2);	//��������
//	list<int> l4(10, 22);	//10��22
//	list<int> l5(l4.begin(), l4.end());	
//	list<int> l6 = l5;
//
//	list<int> lst = { 1,2,3,4,5 };
//
//	//----------list�Ĳ���ɾ��----------
//	cout << "list�Ĳ���ɾ��" << endl;
//
//	lst.push_front(100);	//�ڿ�ͷ����100
//	lst.pop_front();	//ɾ��ͷ��Ԫ��
//	lst.push_back(200);	//β������
//	lst.pop_back();	//ɾ��β��Ԫ��
//
//	//insert����
//	lst = { 1,2,3 };
//
//	lst.insert(lst.begin(), 100);	//��ͷ������100
//
//	lst.insert(lst.begin(), 5, 200);	//��ͷ������5��200
//
//	list<int> lst2(2, 300);
//	lst.insert(lst.begin(), lst2.begin(), lst2.end());	//��lst2������Ԫ�ز���lst��ǰ��
//	
//	//ע�⣺list��˫��������˲���ʹ��begin()+2���������
//
//	for (auto i = lst.begin(); i != lst.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	//earseɾ��
//	lst = { 1,2,3,4,5 };
//
//	lst.erase(lst.begin());	//ɾ����Ԫ
//
//	lst.erase(lst.begin(), --lst.end());	//ɾ���������һ��Ԫ�ص�����Ԫ��
//
//	//Ҫɾ��ĳ���ض�������Ҫ��it������--it����Ҫɾ����λ��
//
//
//	for (auto i = lst.begin(); i != lst.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//	
//	//----------list�����----------
//	cout << "list�����" << endl;
//
//	for (list<int>::iterator it = lst.begin(); it != lst.end(); it++)
//		cout << *it << ' ';
//	cout << endl;
//
//	for (auto i = lst.begin(); i != lst.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	//----------list������----------
//	cout << "list������" << endl;
//
//	list<int> lst1 = { 11,2,5,3,1,9 };
//	lst2 = lst1;
//
//	cout << "����ǰ��";
//	for (auto i = lst1.begin(); i != lst1.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	cout << "�����";
//	lst1.sort();
//	for (auto i = lst1.begin(); i != lst1.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	//���ֽ�������ķ���
//	cout << "�ߵ���";
//	lst1.reverse();
//	for (auto i = lst1.begin(); i != lst1.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	lst2.sort(cmp);
//	for (auto i = lst2.begin(); i != lst2.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	system("pause");
//	return 0;
//}