//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	//----------��������----------
//	vector<int> v1 = { 1,2,3,4 };
//	vector<char> v2 = {'h','e','l','l','o'};
//	vector<string> v3 = { "hello","abc","world" };
//	
//	//���캯������
//	cout << "���캯������" << endl;
//
//	vector<int> v4(10);	//v4��СΪ10��int��û��Ԫ��
//
//	vector<int>v5(10, 6);	//v5��10��6
//	for (auto i : v5)
//		cout << i;
//	cout << endl;
//
//	vector<int> v6(v5);
//	for (auto i : v6)
//		cout << i;
//	cout << endl;
//
//	vector<int> v7(v5.begin(), v5.begin() + 1);	//��[v5.begin(), v5.begin() + 1)��ֵ��v7
//	cout << v7.size() << endl;
//
//	//----------vector���������----------
//	cout << "vector���������" << endl;
//
//	vector<int>v = { 1,2,3,4,5,6 };
//
//	cout << v.at(3) << endl;	//�൱��v[3]
//
//	cout << v.front() << endl;	//ȡ��Ԫ
//
//	cout << v.back() << endl;	//ȡĩԪ
//
//	for (auto i = v.begin(); i != v.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	for(auto i=v.rbegin();i!=v.rend();i++)	//�������
//		cout << *i << ' ';
//	cout << endl;
//
//	//----------vector�Ĳ��뺯��----------
//	cout << "vector�Ĳ��뺯��" << endl;
//
//	v = { 1,2 };
//	vector<int> v_2 = { 111,222 };
//
//	v.push_back(333);	//��ĩβ����333
//
//	v.insert(v.begin(), 666);	//�ڿ�ͷ����666
//
//	v.insert(v.begin() + 1, 3, 999);	//���±�Ϊ1��λ�ò���3��999
//
//	v.insert(v.begin(), v_2.begin(), v_2.end());	//��v_2ȫ�����뿪ͷ
//
//
//	for (auto i = v.begin(); i != v.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	//----------vector��ɾ������----------
//	cout << "vector��ɾ������" << endl;
//
//	v = { 1,2,3,4,5,6 };
//
//	v.erase(v.begin() + 1);	//ɾ���±�Ϊ1��Ԫ��
//
//	v.erase(v.begin() + 2, v.begin() + 4);	//ɾ��[2,4)Ԫ��
//
//	v.pop_back();	//ɾ�����һ��Ԫ��
//
//	//v.clear();	//���ȫ��Ԫ��
//
//	for (auto i = v.begin(); i != v.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	//----------vector���жϺ���----------
//	cout << "vector���жϺ���" << endl;
//
//	cout << v.empty() << endl;
//
//	//----------vector�ķ��ش�С����----------
//	cout << "vector�ķ��ش�С����" << endl;
//
//	v = { 1,2,3,4,5,6 };
//
//	cout << v.size() << endl;
//
//	cout << v.capacity() << endl;
//
//	cout << v.max_size() << endl;
//
//	//----------vector�����ຯ��----------
//	cout << "vector�����ຯ��" << endl;
//
//	v = {};
//
//	v.assign(10, 22);	//����10��22
//
//	for (auto i = v.begin(); i != v.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	vector<int> v_1 = { 1,2,3,4 };
//	v_2 = { 100,200,300 };
//	v_2.assign(v_1.begin(), v_1.end());		//��v_1��ȫ��Ԫ�ظ��Ƶ�v_2��
//
//	for (auto i = v_2.begin(); i != v_2.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	v_2 = { 100,200,300 };
//	v_1.swap(v_2);	//������ֵ����
//
//	for (auto i = v_1.begin(); i != v_1.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	for (auto i = v_2.begin(); i != v_2.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//
//	system("pause");
//	return 0;
//}