//#include<bits/stdc++.h>
//using namespace std;
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "����Person" << endl;
//	}
//	Person(string name, int age)
//	{
//		cout << "Person����" << endl;
//	}
//	~Person()
//	{
//		cout << "����Person����������" << endl;
//	}
//};
//
//int main()
//{
//	//new���ڶ��ϴ�������
//	//delete���ʽ�ȵ�������������Ȼ���ͷ��ڴ�
//	
//	//----------����һ������ָ��----------
//	Person* p1 = new Person;	//������Ĭ�ϵĹ��캯��
//
//	delete p1;
//
//	//----------����һ����̬����----------
//	//��ջ�ϴ�������
//	Person p2[] = {{"zs",20},{"ww",19}};
//	//�ڶ��ϴ�����̬����
//	Person* p3 = new Person[20];	//������Ĭ�ϵĹ��캯��
//
//	delete[] p3;
//
//	//----------new������ͨ����----------
//	//�����ַ�����
//	char* p4 = new char[50];
//
//	//������������
//	int* p5 = new int[20];
//
//	//�����������鲢��ʼ��
//	int* p6 = new int[5] {1, 2, 3, 4, 5};
//
//	//�ͷ������ڴ�
//	delete[] p4;
//	delete[] p5;
//	delete[] p6;
//
//
//	system("pause");
//	return 0;
//}