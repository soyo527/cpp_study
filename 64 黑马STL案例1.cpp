//#include<bits/stdc++.h>
//using namespace std;
//
//class Person
//{
//public:
//	Person(string name, int score) :m_Name(name), m_Score(score) {}
//	string m_Name;
//	int m_Score;
//};
//
//void creatPerson(vector<Person>& v)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "ѡ��";
//		name += nameSeed[i];
//
//		int score = 0;
//		Person p(name, score);
//
//		v.push_back(p);
//	}
//}
//
//void setScore(vector<Person>& v)
//{
//	srand(time(0));
//
//	for (auto& i : v)
//	{
//		//����ί�ķ�������������
//		deque<int> d;
//		for (int i = 0; i < 10; i++)
//		{
//			int score = rand() % 41 + 60;
//			d.push_back(score);
//		}
//
//		cout << "������" << i.m_Name << " �÷֣�" << endl;
//		for (auto i : d)
//		{
//			cout << i << ' ';
//		}
//		cout << endl;
//
//		sort(d.begin(), d.end());
//
//		d.pop_back();
//		d.pop_front();
//
//		int sum_score = 0;
//		for (auto i : d)
//		{
//			sum_score += i;
//		}
//		i.m_Score = sum_score / 8; 
//	}
//}
//
//void showScore(vector<Person>& v)
//{
//	cout << endl << "���ճɼ���" << endl;
//	for (auto i : v)
//	{
//		cout << "������" << i.m_Name << " �÷֣�" << i.m_Score << endl;
//	}
//}
//
//int main()
//{
//	//��ί��ְ���
//	//��5��ѡ�֣�ѡ��ABCDE,10����ί�ֱ��ÿһ��ѡ�ִ�֣�ȥ����߷֣�ȥ����ί����ͷ֣�ȡƽ���֡�
//	
//	//1.��������ѡ��
//	vector<Person>v;
//	creatPerson(v);
//
//	//2.������ѡ�ִ��
//	setScore(v);
//
//	//3.��ʾ����
//	showScore(v);
//	
//
//	system("pause");
//	return 0;
//}