//#include<bits/stdc++.h>
//using namespace std;
//
////����
//class AbstractCalculator
//{
//public:
//	virtual double getResult() = 0;
//	double num1, num2;
//};
//
////����
//class AddCalculator : public AbstractCalculator {//�ӷ���
//public:
//	double getResult() 
//	{
//		return num1 + num2;
//	}
//};
//class SubCalculator : public AbstractCalculator {
//public:
//	double getResult() {
//		return num1 - num2;
//	}
//};
//class MulCalculator :public AbstractCalculator {
//public:
//	double getResult() {
//		return num1 * num2;
//	}
//};
//class DivCalculator : public AbstractCalculator //division ����
//{
//	public :
//	double getResult()
//	{
//		return num1 / num2;
//	}
//};
//class SurCalculator : public AbstractCalculator //Surplus ȡ��
//{
//	public :
//	double getResult()
//	{
//		return (int)num1 % (int)num2;
//	}
//};
//class PowCalculator : public AbstractCalculator //Power �˷�
//{
//	public :
//	double getResult()
//	{
//		return num1 * num1;
//	}
//};
//class SqrtCalculator : public AbstractCalculator //Sqrt ����
//{
//	public :
//	double getResult()
//	{
//		return sqrt(num1);
//	}
//};
//class PowpCalculator : public AbstractCalculator //Powp ����
//{
//	public :
//	double getResult()
//	{
//		return pow(num1, num2); //����num1��num2�η�
//	}
//};
//
//
////�˵�
//void menu()
//{
//	cout << "*******************************" << endl
//		<< "****** 1.�ӷ� ******" << endl
//		<< "****** 2.���� ******" << endl
//		<< "****** 3.�˷� ******" << endl
//		<< "****** 4.���� ******" << endl
//		<< "****** 5.ȡ�� ******" << endl
//		<< "****** 6.�˷� ******" << endl
//		<< "****** 7.���� ******" << endl
//		<< "****** 8.���� ******" << endl
//		<< "****** Q.�˳� ******" << endl
//		<< "*******************************" << endl;
//}
//
////��ͬ����
//void Add(int a, int b)
//{
//	cout << "������a��b��ֵ��" << endl;
//	cin >> a >> b;
//	AbstractCalculator* p = new AddCalculator;
//	p->num1 = a;
//	p->num2 = b;
//	cout << a << "+" << b << "=";
//	cout << p->getResult() << endl;
//	delete p;
//	cout << "�����������" << endl;
//	system("pause");
//	system("cls");
//}
//
//void Sub(int a, int b)
//{
//	cout << "������a��b��ֵ��" << endl;
//	cin >> a >> b;
//	AbstractCalculator* p = new SubCalculator;
//	p->num1 = a;
//	p->num2 = b;
//	cout << a << "-" << b << "=";
//	cout << p->getResult() << endl;
//	delete p;
//	cout << "�����������" << endl;
//	system("pause");
//	system("cls");
//}
//
//void Mul(int a, int b)
//{
//	cout << "������a��b��ֵ��" << endl;
//	cin >> a >> b;
//	AbstractCalculator* p = new MulCalculator;
//	p->num1 = a;
//	p->num2 = b;
//	cout << a << "*" << b << "=";
//	cout << p->getResult() << endl;
//	delete p;
//	cout << "�����������" << endl;
//	system("pause");
//	system("cls");
//}
//
//void Div(int a, int b)
//{
//	cout << "������a��b��ֵ��" << endl;
//	cin >> a >> b;
//	AbstractCalculator* p = new DivCalculator;
//	p->num1 = a;
//	p->num2 = b;
//	cout << a << "��" << b << "=";
//	cout << p->getResult() << endl;
//	delete p;
//	cout << "�����������" << endl;
//	system("pause");
//	system("cls");
//}
//
//void Sur(int a, int b)
//{
//	cout << "������a��b��ֵ��" << endl;
//	cin >> a >> b;
//	AbstractCalculator* p = new SurCalculator;
//	p->num1 = a;
//	p->num2 = b;
//	cout << a << "%" << b << "=";
//	cout << p->getResult() << endl;
//	delete p;
//	cout << "�����������" << endl;
//	system("pause");
//	system("cls");
//}
//
//void Pow(int a, int b)
//{
//	cout << "������a��ֵ��" << endl;
//	cin >> a ;
//	AbstractCalculator* p = new PowCalculator;
//	p->num1 = a;
//	p->num2 = a;
//	cout << a << "^" << a << "=";
//	cout << p->getResult() << endl;
//	delete p;
//	cout << "�����������" << endl;
//	system("pause");
//	system("cls");
//}
//
//void Sqrt1(int a, int b)
//{
//	cout << "������a��ֵ��" << endl;
//	cin >> a;
//	AbstractCalculator* p = new SqrtCalculator;
//	p->num1 = a;
//	p->num2 = a;
//	cout << a << "������=";
//	cout << p->getResult() << endl;
//	delete p;
//	cout << "�����������" << endl;
//	system("pause");
//	system("cls");
//}
//
//void Pow1(int a, int b)
//{
//	cout << "������a��b��ֵ��" << endl;
//	cin >> a >> b;
//	AbstractCalculator* p = new PowpCalculator;
//	p->num1 = a;
//	p->num2 = b;
//	cout << a << "^" << b << "=";
//	cout << p->getResult() << endl;
//	delete p;
//	cout << "�����������" << endl;
//	system("pause");
//	system("cls");
//}
//
//int main()
//{
//	char select;
//	double a = 0, b = 0;
//	while (1)
//	{
//		menu();
//		cout << "��ѡ����Ž��м��㣺";
//		cin >> select;
//		switch (select)
//		{
//		case '1':
//			Add(a, b);	//�ӷ�
//			break;
//		case '2':
//			Sub(a, b);	//����
//			break;
//		case '3':
//			Mul(a, b);	//�˷�
//			break;
//		case '4':
//			Div(a, b);	//����
//			break;
//		case '5':
//			Sur(a, b);	//ȡ��
//			break;
//		case '6':
//			Pow(a, b);	//�˷�
//			break;
//		case '7':
//			Sqrt1(a, b);	//����
//			break;
//		case '8':
//			Pow1(a, b);	//����
//			break;
//		case 'Q':
//			cout << "ȷ���˳��𣿣�Y/N��" << endl;
//			cin >> select;
//			if (select == 'Y')
//			{
//				cout << "��ӭ�´�ʹ��" << endl;
//				return 0;
//				break;
//			}
//			break;
//		default:
//			exit(0);
//			break;
//		}
//	}
//
//	system("pause");
//	return 0;
//}