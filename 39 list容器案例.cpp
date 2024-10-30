//#include<bits/stdc++.h>
//using namespace std;
//
//class Person
//{
//public:
//	Person(string name, int age, int m_high) :name(name), age(age), m_high(m_high) {}
//	string name;
//	int age;
//	int m_high;
//};
//
//bool cmp(Person& p1, Person& p2)
//{
//	if (p1.age != p2.age)
//		return p1.age < p2.age;
//	else
//		return p1.m_high > p2.m_high;
//}
//
//int main()
//{
//	//将Person自定义数据类型进行排序，Persont中属性有姓名、年龄、身高。按照年龄进行升序，如果年龄相同按照身高进行降序。
//	list<Person> l;
//	Person p1("ts", 35, 175);
//	Person p2("swk", 45, 100);
//	Person p3("zbj", 40, 170);
//	Person p4("swj", 40, 190);
//
//	l.push_back(p1);
//	l.push_back(p2);
//	l.push_back(p3);
//	l.push_back(p4);
//
//	l.sort(cmp);
//
//	for (auto i = l.begin(); i != l.end(); i++)
//		cout << "姓名：" << (*i).name << " 年龄：" << (*i).age << " 身高：" << (*i).m_high << endl;
//
//	system("pause");
//	return 0;
//}