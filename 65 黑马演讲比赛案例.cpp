//#include<bits/stdc++.h>
//using namespace std;
//
////ѧУ����һ���ݽ�����������12���˲μӡ����������֣���һ��Ϊ��̭�����ڶ���Ϊ������
////ÿ��ѡ�ֶ��ж�Ӧ�ı�ţ���10001~10012
////������ʽ�����������ÿ��6����;
////��һ�ַ�Ϊ����С�飬���尴��ѡ�ֱ�Ž��г�ǩ��˳���ݽ���
////ʮ����ί�ֱ��ÿ��ѡ�ִ�֣�ȥ����߷ֺ���ͷ֣����ƽ����Ϊ����ѡ�ֵĳɼ�
////��С���ݽ������̭����������������ѡ�֣�ǰ����������������һ�ֵı�����
////�ڶ���Ϊ������ǰ����ʤ��
////ÿ�ֱ���������Ҫ��ʾ����ѡ�ֵ���Ϣ
//
////ѡ����
//class Speaker
//{
//public:
//	string m_Name;
//	double m_Score[2];	//���������ֵ÷�
//};
//
//class SpeechManager
//{
//public:
//	//���캯��
//	SpeechManager()
//	{
//		//��ʼ������
//		this->initSpeech();
//
//		//����ѡ��
//		this->createSpeaker();
//	}
//
//	//չʾ�˵�
//	void showMenu()
//	{
//		cout << "********************************************" << endl;
//		cout << "*************  ��ӭ�μ��ݽ����� ************" << endl;
//		cout << "*************  1.��ʼ�ݽ�����  *************" << endl;
//		cout << "*************  2.�鿴�����¼  *************" << endl;
//		cout << "*************  3.��ձ�����¼  *************" << endl;
//		cout << "*************  0.�˳���������  *************" << endl;
//		cout << "********************************************" << endl;
//		cout << endl;
//	}
//
//	//�˳�ϵͳ
//	void exitSystem()
//	{
//		cout << "��ӭ�´�ʹ�ã�" << endl;
//		system("pause");
//		exit(0);
//	}
//
//	//��ʼ����Ա����
//	void initSpeech()
//	{
//		//�����ÿ�
//		this->v1.clear();
//		this->v2.clear();
//		this->vVictory.clear();
//		this->m_Speaker.clear();
//
//		//��ʼ����������
//		this->m_Index = 1;
//	}
//
//	//����ѡ��
//	void createSpeaker()
//	{
//		string nameSeed = "ABCDEFGHIJKL";
//		for (int i = 0; i < nameSeed.size(); i++)
//		{
//			string name = "ѡ��";
//			name += nameSeed[i];
//
//			//��������ѡ��
//			Speaker sp;
//			sp.m_Name = name;
//
//			for (int j = 0; j < 2; j++)
//			{
//				sp.m_Score[j] = 0;
//			}
//
//			//����ѡ�ֱ��
//			this->v1.push_back(i + 10001);
//
//			//ѡ�ֱ���Լ���Ӧ��ѡ�� ���뵽map������
//			this->m_Speaker.insert(make_pair(i + 10001, sp));
//		}
//	}
//
//	//��ʼ���� �������̿���
//	void startSpeech()
//	{
//		//��һ�ֿ�ʼ����
//
//		//1.��ǩ
//		this->speechDraw();
//
//		//2.����
//
//		//3.��ʾ�������
//
//
//		//�ڶ��ֿ�ʼ����
//
//		//1.��ǩ
//
//		//2.����
//
//		//3.��ʾ���ս��
//
//		//4.����������ļ�
//	}
//
//	void speechDraw()
//	{
//		cout << "��<<" << this->m_Index << ">>�ֱ���ѡ�����ڳ�ǩ" << endl;
//		cout << "----------------------------" << endl;
//		cout << "��ǩ����ݽ�˳�����£�" << endl;
//
//		if (this->m_Index == 1)
//		{
//			//��һ�ֱ���
//			random_shuffle(v1.begin(), v1.end());	//ϴ�ƺ�������˳��
//			for (auto i : v1)
//			{
//				cout << i << ' ';
//			}
//			cout << endl;
//		}
//		else
//		{
//			//��һ�ֱ���
//			random_shuffle(v2.begin(), v2.end());	//ϴ�ƺ�������˳��
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
//	//��������
//	~SpeechManager() {}
//
//public:
//	//��Ա����
//	//�����һ�ֱ���ѡ�ֱ������
//	vector<int> v1;
//	//��һ�ֽ�����Ա
//	vector<int> v2;
//	//ʤ����ǰ����
//	vector<int> vVictory;
//	//��ű���Լ���Ӧ����ѡ������
//	map<int, Speaker> m_Speaker;
//	//��ű�������
//	int m_Index;
//};
//
//int main()
//{
//	//�������������
//	SpeechManager sm;
//
//	//test
//	//for (auto i : sm.m_Speaker)
//	//{
//	//	cout << "ѡ�ֱ�ţ�" << i.first << "ѡ��������" << i.second.m_Name << "������" << i.second.m_Score[0] << endl;
//	//}
//
//	int choice = 0;	//�洢�û�����
//
//	while (true)
//	{
//		sm.showMenu();
//
//		cout << "���������ѡ��" << endl;
//		cin >> choice;
//
//		switch (choice)
//		{
//		case 1:		//��ʼ����
//			sm.startSpeech();
//			break;
//		case 2:		//�鿴��¼
//			break;
//		case 3:		//��ռ�¼
//			break;
//		case 0:		//�˳�ϵͳ
//			sm.exitSystem();
//			break;
//		default:
//			system("cls");	//����
//			break;
//		}
//	}
//
//	system("pause");
//	return 0;
//}