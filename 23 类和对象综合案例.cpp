//#include<bits/stdc++.h>
//using namespace std;
//
////基类
//class AbstractCalculator
//{
//public:
//	virtual double getResult() = 0;
//	double num1, num2;
//};
//
////子类
//class AddCalculator : public AbstractCalculator {//加法类
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
//class DivCalculator : public AbstractCalculator //division 除法
//{
//	public :
//	double getResult()
//	{
//		return num1 / num2;
//	}
//};
//class SurCalculator : public AbstractCalculator //Surplus 取余
//{
//	public :
//	double getResult()
//	{
//		return (int)num1 % (int)num2;
//	}
//};
//class PowCalculator : public AbstractCalculator //Power 乘方
//{
//	public :
//	double getResult()
//	{
//		return num1 * num1;
//	}
//};
//class SqrtCalculator : public AbstractCalculator //Sqrt 开根
//{
//	public :
//	double getResult()
//	{
//		return sqrt(num1);
//	}
//};
//class PowpCalculator : public AbstractCalculator //Powp 次幂
//{
//	public :
//	double getResult()
//	{
//		return pow(num1, num2); //计算num1的num2次方
//	}
//};
//
//
////菜单
//void menu()
//{
//	cout << "*******************************" << endl
//		<< "****** 1.加法 ******" << endl
//		<< "****** 2.减法 ******" << endl
//		<< "****** 3.乘法 ******" << endl
//		<< "****** 4.除法 ******" << endl
//		<< "****** 5.取余 ******" << endl
//		<< "****** 6.乘方 ******" << endl
//		<< "****** 7.开根 ******" << endl
//		<< "****** 8.次幂 ******" << endl
//		<< "****** Q.退出 ******" << endl
//		<< "*******************************" << endl;
//}
//
////不同方法
//void Add(int a, int b)
//{
//	cout << "请输入a和b的值：" << endl;
//	cin >> a >> b;
//	AbstractCalculator* p = new AddCalculator;
//	p->num1 = a;
//	p->num2 = b;
//	cout << a << "+" << b << "=";
//	cout << p->getResult() << endl;
//	delete p;
//	cout << "按任意键继续" << endl;
//	system("pause");
//	system("cls");
//}
//
//void Sub(int a, int b)
//{
//	cout << "请输入a和b的值：" << endl;
//	cin >> a >> b;
//	AbstractCalculator* p = new SubCalculator;
//	p->num1 = a;
//	p->num2 = b;
//	cout << a << "-" << b << "=";
//	cout << p->getResult() << endl;
//	delete p;
//	cout << "按任意键继续" << endl;
//	system("pause");
//	system("cls");
//}
//
//void Mul(int a, int b)
//{
//	cout << "请输入a和b的值：" << endl;
//	cin >> a >> b;
//	AbstractCalculator* p = new MulCalculator;
//	p->num1 = a;
//	p->num2 = b;
//	cout << a << "*" << b << "=";
//	cout << p->getResult() << endl;
//	delete p;
//	cout << "按任意键继续" << endl;
//	system("pause");
//	system("cls");
//}
//
//void Div(int a, int b)
//{
//	cout << "请输入a和b的值：" << endl;
//	cin >> a >> b;
//	AbstractCalculator* p = new DivCalculator;
//	p->num1 = a;
//	p->num2 = b;
//	cout << a << "÷" << b << "=";
//	cout << p->getResult() << endl;
//	delete p;
//	cout << "按任意键继续" << endl;
//	system("pause");
//	system("cls");
//}
//
//void Sur(int a, int b)
//{
//	cout << "请输入a和b的值：" << endl;
//	cin >> a >> b;
//	AbstractCalculator* p = new SurCalculator;
//	p->num1 = a;
//	p->num2 = b;
//	cout << a << "%" << b << "=";
//	cout << p->getResult() << endl;
//	delete p;
//	cout << "按任意键继续" << endl;
//	system("pause");
//	system("cls");
//}
//
//void Pow(int a, int b)
//{
//	cout << "请输入a的值：" << endl;
//	cin >> a ;
//	AbstractCalculator* p = new PowCalculator;
//	p->num1 = a;
//	p->num2 = a;
//	cout << a << "^" << a << "=";
//	cout << p->getResult() << endl;
//	delete p;
//	cout << "按任意键继续" << endl;
//	system("pause");
//	system("cls");
//}
//
//void Sqrt1(int a, int b)
//{
//	cout << "请输入a的值：" << endl;
//	cin >> a;
//	AbstractCalculator* p = new SqrtCalculator;
//	p->num1 = a;
//	p->num2 = a;
//	cout << a << "开根号=";
//	cout << p->getResult() << endl;
//	delete p;
//	cout << "按任意键继续" << endl;
//	system("pause");
//	system("cls");
//}
//
//void Pow1(int a, int b)
//{
//	cout << "请输入a和b的值：" << endl;
//	cin >> a >> b;
//	AbstractCalculator* p = new PowpCalculator;
//	p->num1 = a;
//	p->num2 = b;
//	cout << a << "^" << b << "=";
//	cout << p->getResult() << endl;
//	delete p;
//	cout << "按任意键继续" << endl;
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
//		cout << "请选择序号进行计算：";
//		cin >> select;
//		switch (select)
//		{
//		case '1':
//			Add(a, b);	//加法
//			break;
//		case '2':
//			Sub(a, b);	//减法
//			break;
//		case '3':
//			Mul(a, b);	//乘法
//			break;
//		case '4':
//			Div(a, b);	//除法
//			break;
//		case '5':
//			Sur(a, b);	//取余
//			break;
//		case '6':
//			Pow(a, b);	//乘方
//			break;
//		case '7':
//			Sqrt1(a, b);	//开根
//			break;
//		case '8':
//			Pow1(a, b);	//次幂
//			break;
//		case 'Q':
//			cout << "确认退出吗？（Y/N）" << endl;
//			cin >> select;
//			if (select == 'Y')
//			{
//				cout << "欢迎下次使用" << endl;
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