//#include<bits/stdc++.h>
//using namespace std;
//
////�������(����ʵ����)
//class AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void boil() = 0;
//	
//	//��
//	virtual void brow() = 0;
//	
//	//���뱭��
//	virtual void pourCup() = 0;
//	
//	//�Ӹ���
//	virtual void putSomething() = 0;
//
//	void makeDrink()
//	{
//		boil();
//		brow();
//		pourCup();
//		putSomething();
//	}
//
//};
//
////������������
//class Coffee :public AbstractDrinking
//{
//public:
//	virtual void boil()
//	{
//		cout << "��ɽȪˮ" << endl;
//	}
//
//	virtual void brow()
//	{
//		cout << "�ݿ���" << endl;
//	}
//
//	virtual void pourCup()
//	{
//		cout << "���ȵ��뱭��" << endl;
//	}
//
//	virtual void putSomething()
//	{
//		cout << "��ţ��" << endl;
//	}
//};
//
////�����ݲ�
//class Tea :public AbstractDrinking
//{
//public:
//	virtual void boil()
//	{
//		cout << "��׿�ˮ" << endl;
//	}
//
//	virtual void brow()
//	{
//		cout << "�ݲ�" << endl;
//	}
//
//	virtual void pourCup()
//	{
//		cout << "�赹�뱭��" << endl;
//	}
//
//	virtual void putSomething()
//	{
//		cout << "����" << endl;
//	}
//};
//
////ҵ����
//void DoBussiness(AbstractDrinking *drink)
//{
//	drink->makeDrink();
//	delete drink;
//}
//
//int main()
//{
//	//���麯��������Ի��������������ת����ʹ�����Ľӿ�	����ϣ���û�ʵ�ʴ���һ������Ķ���
//	//���̳�һ��������ʱ������ʵ�����еĴ��麯��������̳г�����Ҳ�ǳ�����
//	DoBussiness(new Coffee);
//	cout << endl;
//	DoBussiness(new Tea);
//
//
//	system("pause");
//	return 0;
//}