//#include<bits/stdc++.h>
//using namespace std;
//
//void printMultiset(multiset<int>& ms)
//{
//	for (auto i = ms.begin(); i != ms.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//}
//
//int main()
//{
//	//Multiset��set����������һ�֣���ӵ��set��ȫ�����ݣ��ڴ˻���֮��multiset���߱��˿����ظ�����Ԫ�صĹ���
//	//Multiset���Բ���һ������
//
//	//----------Multiset�Ĵ���----------
//	multiset<int> ms1;
//	multiset<int> ms2(ms1);
//	multiset<int> ms3 = ms1;
//
//	//----------Multiset�Ĳ����ɾ��----------
//	cout << "Multiset�Ĳ����ɾ��" << endl;
//
//	multiset<int> ms;
//	ms.insert(3);
//	ms.insert(2);
//	ms.insert(5);
//	ms.insert(4);
//	ms.insert(1);
//	ms.insert(1);
//	ms.insert(3);
//	ms2 = { 11,33,44,77 };
//	ms.insert(ms2.begin(), ms2.end());
//	ms.insert(ms.begin(), 999);
//	printMultiset(ms);
//
//	ms.erase(ms.begin());
//	printMultiset(ms);
//
//	ms.erase(ms.begin(),++ms.begin());
//	printMultiset(ms);
//
//	ms.erase(5);
//	printMultiset(ms);
//
//	//----------Multiset������ͳ��----------
//	cout << "Multiset����" << endl;
//
//	ms = { 3,1,4,2,5,4,2,9,7,2,2,2,2,2,2,2 };
//	int pos = 0;
//	for (auto i = ms.begin(); i != ms.find(9); i++, pos++);
//	cout << pos << endl;
//
//	//ͳ��Ԫ��
//	cout << ms.count(4) << endl;
//
//	auto pos2 = ms.lower_bound(6);	//���ش��ڵ���6�ĵ�����
//	cout << *pos2 << endl;
//
//	system("pause");
//	return 0;
//}