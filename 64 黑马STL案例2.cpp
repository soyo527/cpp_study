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
//		string name = "员工";
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
//			Person p(i.name, wage, "策划");
//			v.erase(v.begin());
//			v.push_back(p);
//		}
//		else if (department == 1)
//		{
//			Person p(i.name, wage, "美术");
//			v.erase(v.begin());
//			v.push_back(p);
//		}
//		else
//		{
//			Person p(i.name, wage, "研发");
//			v.erase(v.begin());
//			v.push_back(p);
//		}	
//	}
//}
//
//void showPersonByGroup(multimap<string, pair<string, int>>& m)
//{
//	// 显示策划部门员工
//	cout << "策划部门员工：" << endl;
//	auto pos = m.equal_range("策划");
//	for (auto it = pos.first; it != pos.second; ++it)
//	{
//		cout << "姓名：" << it->second.first << " 工资：" << it->second.second << endl;
//	}
//
//	// 显示美术部门员工
//	cout << "\n美术部门员工：" << endl;
//	pos = m.equal_range("美术");
//	for (auto it = pos.first; it != pos.second; ++it)
//	{
//		cout << "姓名：" << it->second.first << " 工资：" << it->second.second << endl;
//	}
//
//	// 显示研发部门员工
//	cout << "\n研发部门员工：" << endl;
//	pos = m.equal_range("研发");
//	for (auto it = pos.first; it != pos.second; ++it)
//	{
//		cout << "姓名：" << it->second.first << " 工资：" << it->second.second << endl;
//	}
//}
//
//int main()
//{
//	//员工分组
//	
//	//公司今天招聘了10个员工(ABCDEFGHIJ)，10名员工进入公司之后，需要指派员工在那个部门工作
//	//员工信息有：姓名 工资组成;部门分为：策划、美术、研发
//	//随机给10名员工分配部门和工资
//	//通过multimap : 进行信息的插入key(部门编号)value(员工)
//	//分部门显示员工信息
//
//	srand(time(0));
//
//	//1.创建10名员工，放到vector中
//	vector<Person> v;
//	creatPerson(v);
//
//	//2.遍历vector容器，取出每个员工，进行随机分组
//	setPerson(v);
//	for (auto i : v)
//	{
//		cout << "姓名：" << i.name << " 工资：" << i.wage << " 部门：" << i.department << endl;
//	}
//
//	//3.分组后，将员工部门编号作为key, 具体员工作为value, 放入到multimap容器中
//	multimap<string, pair< string, int>> m;
//	for (auto& i : v)
//	{
//		m.insert(make_pair(i.department, make_pair(i.name,i.wage)));
//	}
//
//	//4.分部门显示员工信息
//	showPersonByGroup(m);
//
//	system("pause");
//	return 0;
//}