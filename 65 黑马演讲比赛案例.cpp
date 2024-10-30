//#include<bits/stdc++.h>
//using namespace std;
//
////学校举行一场演讲比塞，共有12个人参加。比赛共两轮，第一轮为淘汰赛，第二轮为决赛。
////每名选手都有对应的编号，如10001~10012
////比塞方式：分组比赛，每组6个人;
////第一轮分为两个小组，整体按照选手编号进行抽签后顺序演讲。
////十个评委分别给每名选手打分，去除最高分和最低分，求的平均分为本轮选手的成绩
////当小组演讲完后，淘汰组内排名最后的三个选手，前三名晋级，进入下一轮的比赛。
////第二轮为决赛，前三名胜出
////每轮比赛过后需要显示晋级选手的信息
//
////选手类
//class Speaker
//{
//public:
//	string m_Name;
//	double m_Score[2];	//可能有两轮得分
//};
//
//class SpeechManager
//{
//public:
//	//构造函数
//	SpeechManager()
//	{
//		//初始化属性
//		this->initSpeech();
//
//		//创建选手
//		this->createSpeaker();
//	}
//
//	//展示菜单
//	void showMenu()
//	{
//		cout << "********************************************" << endl;
//		cout << "*************  欢迎参加演讲比赛 ************" << endl;
//		cout << "*************  1.开始演讲比赛  *************" << endl;
//		cout << "*************  2.查看往届记录  *************" << endl;
//		cout << "*************  3.清空比赛记录  *************" << endl;
//		cout << "*************  0.退出比赛程序  *************" << endl;
//		cout << "********************************************" << endl;
//		cout << endl;
//	}
//
//	//退出系统
//	void exitSystem()
//	{
//		cout << "欢迎下次使用！" << endl;
//		system("pause");
//		exit(0);
//	}
//
//	//初始化成员属性
//	void initSpeech()
//	{
//		//容器置空
//		this->v1.clear();
//		this->v2.clear();
//		this->vVictory.clear();
//		this->m_Speaker.clear();
//
//		//初始化比赛轮数
//		this->m_Index = 1;
//	}
//
//	//创建选手
//	void createSpeaker()
//	{
//		string nameSeed = "ABCDEFGHIJKL";
//		for (int i = 0; i < nameSeed.size(); i++)
//		{
//			string name = "选手";
//			name += nameSeed[i];
//
//			//创建具体选手
//			Speaker sp;
//			sp.m_Name = name;
//
//			for (int j = 0; j < 2; j++)
//			{
//				sp.m_Score[j] = 0;
//			}
//
//			//创建选手编号
//			this->v1.push_back(i + 10001);
//
//			//选手编号以及对应的选手 放入到map容器中
//			this->m_Speaker.insert(make_pair(i + 10001, sp));
//		}
//	}
//
//	//开始比赛 比赛流程控制
//	void startSpeech()
//	{
//		//第一轮开始比赛
//
//		//1.抽签
//		this->speechDraw();
//
//		//2.比赛
//
//		//3.显示晋级结果
//
//
//		//第二轮开始比赛
//
//		//1.抽签
//
//		//2.比赛
//
//		//3.显示最终结果
//
//		//4.保存分数到文件
//	}
//
//	void speechDraw()
//	{
//		cout << "第<<" << this->m_Index << ">>轮比赛选手正在抽签" << endl;
//		cout << "----------------------------" << endl;
//		cout << "抽签后的演讲顺序如下：" << endl;
//
//		if (this->m_Index == 1)
//		{
//			//第一轮比赛
//			random_shuffle(v1.begin(), v1.end());	//洗牌函数打乱顺序
//			for (auto i : v1)
//			{
//				cout << i << ' ';
//			}
//			cout << endl;
//		}
//		else
//		{
//			//第一轮比赛
//			random_shuffle(v2.begin(), v2.end());	//洗牌函数打乱顺序
//			for (auto i : v2)
//			{
//				cout << i << ' ';
//			}
//			cout << endl;
//		}
//		cout << "----------------------------" << endl;
//		
//		system("pause");
//		cout << endl;
//	}
//
//	//析构函数
//	~SpeechManager() {}
//
//public:
//	//成员属性
//	//保存第一轮比赛选手编号容器
//	vector<int> v1;
//	//第一轮晋级人员
//	vector<int> v2;
//	//胜出的前三名
//	vector<int> vVictory;
//	//存放编号以及对应具体选手容器
//	map<int, Speaker> m_Speaker;
//	//存放比赛轮数
//	int m_Index;
//};
//
//int main()
//{
//	//创建管理类对象
//	SpeechManager sm;
//
//	//test
//	//for (auto i : sm.m_Speaker)
//	//{
//	//	cout << "选手编号：" << i.first << "选手姓名：" << i.second.m_Name << "分数：" << i.second.m_Score[0] << endl;
//	//}
//
//	int choice = 0;	//存储用户输入
//
//	while (true)
//	{
//		sm.showMenu();
//
//		cout << "请输入你的选择：" << endl;
//		cin >> choice;
//
//		switch (choice)
//		{
//		case 1:		//开始比赛
//			sm.startSpeech();
//			break;
//		case 2:		//查看记录
//			break;
//		case 3:		//清空记录
//			break;
//		case 0:		//退出系统
//			sm.exitSystem();
//			break;
//		default:
//			system("cls");	//清屏
//			break;
//		}
//	}
//
//	system("pause");
//	return 0;
//}