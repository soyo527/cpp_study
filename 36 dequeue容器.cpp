//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	//----------˫�˶��еĴ���----------
//	deque<int> d1;
//	deque<int> d2(10);	//��ʼ������Ϊ10
//	deque<int> d3(10, 1);	//����Ϊ10��ֵΪ1 
//	deque<int> d4(d3);
//	deque<int> d5(d3.begin(), d3.begin() + 3);	//ʹ�õ�������ʼ������[d3.begin(), d3.begin() + 3)��Ԫ�ؿ���������
//
//	for (auto i = d5.begin(); i != d5.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	//----------˫�˶��е���Ӻ���----------
//	cout << "˫�˶��е���Ӻ���" << endl;
//
//	d1 = {};
//	//��ͷ���Ԫ��
//	d1.push_front(4);
//	//��β���Ԫ��
//	d1.push_back(5);
//	
//	deque<int>::iterator it = d1.begin();
//	d1.insert(it,2);
//	
//	d1.insert(d1.begin(), 3, 9);	//��begin����3��9
//
//	d2 = {11,22};
//	d1.insert(d1.begin(), d2.end() - 1, d2.end());	//��begin����d2�е����һ��Ԫ��
//
//	//�������d1Ԫ��
//	for (auto i = d1.begin(); i != d1.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	//----------˫�˶��е�ɾ������----------
//	cout << "˫�˶��е�ɾ������" << endl;
//
//	d1 = {};
//	for (int i = 0; i < 10; i++)
//		d1.push_back(i);
//
//	//ͷ������
//	d1.pop_front();	//ɾ����һ��Ԫ��
//
//	//β������
//	d1.pop_back();	//ɾ�����һ��Ԫ��
//
//	deque<int>::iterator it1=d1.begin();
//	d1.erase(it1);		//ɾ����һ��Ԫ��
//
//	d1.erase(d1.begin(), d1.begin() + 2);		//ɾ��[d1.begin(), d1.begin() + 2)��Ԫ��
//
//	for (auto i = d1.begin(); i != d1.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	//�������Ԫ��
//	d1.clear();
//
//	//----------˫�˶��еķ��ʺ���----------
//	cout << "˫�˶��еķ��ʺ���" << endl;
//
//	d1 = { 1,2,3,4,5,6 };
//	
//	//ͨ���±����
//	cout << d1[2] << endl;
//
//	//ͨ��at��������
//	cout << d1.at(4) << endl;
//
//	//���ʶ�ͷ
//	cout << d1.front() << endl;
//
//	//���ʶ�β
//	cout << d1.back() << endl;
//
//	//----------˫�˶��е���������----------
//	cout << "˫�˶��е���������" << endl;
//
//	d1 = { 1,2,3,4,5 };
//
//	//Ԫ�ظ���
//	cout << d1.size() << endl;
//	cout << d1.max_size() << endl;
//
//	//�޸�Ԫ�ش�С
//	d1.resize(0);
//	cout << d1.size() << endl;
//
//	if (d1.empty())
//		cout << "û��Ԫ���ˣ�" << endl;
//
//	//----------˫�˶��е���������----------
//	cout << "˫�˶��е���������" << endl;
//
//	d1 = {};
//	d1.assign(3, 1);	//��ǰ����Ԫ�ظ�ֵΪ1
//	d2 = {};
//	d2.assign(3, 2);
//
//	for (auto i = d1.begin(); i != d1.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	for (auto i = d2.begin(); i != d2.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	//�����������е�Ԫ��
//	d1.swap(d2);
//
//	for (auto i = d1.begin(); i != d1.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	for (auto i = d2.begin(); i != d2.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//
//	system("pause");
//	return 0;
//}