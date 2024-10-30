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
//		string name = "选手";
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
//		//将评委的分数放入容器中
//		deque<int> d;
//		for (int i = 0; i < 10; i++)
//		{
//			int score = rand() % 41 + 60;
//			d.push_back(score);
//		}
//
//		cout << "姓名：" << i.m_Name << " 得分：" << endl;
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
//	cout << endl << "最终成绩：" << endl;
//	for (auto i : v)
//	{
//		cout << "姓名：" << i.m_Name << " 得分：" << i.m_Score << endl;
//	}
//}
//
//int main()
//{
//	//评委打分案例
//	//有5名选手：选手ABCDE,10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分。
//	
//	//1.创建五名选手
//	vector<Person>v;
//	creatPerson(v);
//
//	//2.给五名选手打分
//	setScore(v);
//
//	//3.显示分数
//	showScore(v);
//	
//
//	system("pause");
//	return 0;
//}