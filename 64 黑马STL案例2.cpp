//#include<bits/stdc++.h>
//using namespace std;
//
//class Person
//{
//public:
//	Person() {}
//	Person(string name) :name(name) {}
//	Person(string name, int wage, string department) :name(name), wage(wage), department(department) {}
//
//	string name;
//	int wage;
//	string department;
//};
//
//void creatPerson(vector<Person>& v)
//{
//	string nameSeed = "ABCDEFGHIJ";
//	for (int i = 0; i < 10; i++)
//	{
//		string name = "Ա��";
//		name += nameSeed[i];
//		Person p(name);
//		v.push_back(p);
//	}
//}
//
//void setPerson(vector<Person>& v)
//{
//	for (auto& i : v)
//	{
//		int wage = rand() % 5000 + 5000;
//		int department = rand() % 3;
//		if (department == 0)
//		{
//			Person p(i.name, wage, "�߻�");
//			v.erase(v.begin());
//			v.push_back(p);
//		}
//		else if (department == 1)
//		{
//			Person p(i.name, wage, "����");
//			v.erase(v.begin());
//			v.push_back(p);
//		}
//		else
//		{
//			Person p(i.name, wage, "�з�");
//			v.erase(v.begin());
//			v.push_back(p);
//		}	
//	}
//}
//
//void showPersonByGroup(multimap<string, pair<string, int>>& m)
//{
//	// ��ʾ�߻�����Ա��
//	cout << "�߻�����Ա����" << endl;
//	auto pos = m.equal_range("�߻�");
//	for (auto it = pos.first; it != pos.second; ++it)
//	{
//		cout << "������" << it->second.first << " ���ʣ�" << it->second.second << endl;
//	}
//
//	// ��ʾ��������Ա��
//	cout << "\n��������Ա����" << endl;
//	pos = m.equal_range("����");
//	for (auto it = pos.first; it != pos.second; ++it)
//	{
//		cout << "������" << it->second.first << " ���ʣ�" << it->second.second << endl;
//	}
//
//	// ��ʾ�з�����Ա��
//	cout << "\n�з�����Ա����" << endl;
//	pos = m.equal_range("�з�");
//	for (auto it = pos.first; it != pos.second; ++it)
//	{
//		cout << "������" << it->second.first << " ���ʣ�" << it->second.second << endl;
//	}
//}
//
//int main()
//{
//	//Ա������
//	
//	//��˾������Ƹ��10��Ա��(ABCDEFGHIJ)��10��Ա�����빫˾֮����Ҫָ��Ա�����Ǹ����Ź���
//	//Ա����Ϣ�У����� �������;���ŷ�Ϊ���߻����������з�
//	//�����10��Ա�����䲿�ź͹���
//	//ͨ��multimap : ������Ϣ�Ĳ���key(���ű��)value(Ա��)
//	//�ֲ�����ʾԱ����Ϣ
//
//	srand(time(0));
//
//	//1.����10��Ա�����ŵ�vector��
//	vector<Person> v;
//	creatPerson(v);
//
//	//2.����vector������ȡ��ÿ��Ա���������������
//	setPerson(v);
//	for (auto i : v)
//	{
//		cout << "������" << i.name << " ���ʣ�" << i.wage << " ���ţ�" << i.department << endl;
//	}
//
//	//3.����󣬽�Ա�����ű����Ϊkey, ����Ա����Ϊvalue, ���뵽multimap������
//	multimap<string, pair< string, int>> m;
//	for (auto& i : v)
//	{
//		m.insert(make_pair(i.department, make_pair(i.name,i.wage)));
//	}
//
//	//4.�ֲ�����ʾԱ����Ϣ
//	showPersonByGroup(m);
//
//	system("pause");
//	return 0;
//}