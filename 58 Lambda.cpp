//#include<bits/stdc++.h>
//using namespace std;
//
//void (*FP)();//����ָ��
//
//class Rate
//{
//private:
//	double _rate;
//public:
//	Rate(double rate) :_rate(rate) {}
//	double operator()(double money, int year)
//	{
//		return money * _rate * year;
//	}
//};
//
//struct Goods
//{
//	string name;
//	double price;
//};
//
//int main()
//{
//	//��򵥵�lambda���ʽ������
//	[] {};
//
//	//ʡ�Բ����б�ͷ���ֵ���ͣ����������ɱ��������Ƶ�
//	int n1 = 100, n2 = 200;
//	auto fun0 = [&n1, &n2] {return n1 + n2; };
//	cout << fun0() << endl;
//
//	//ʡ�Է���ֵ����
//	auto fun1 = [&n1, &n2](int n3) {n2 = n1 + n3; };
//	fun1(300);
//	cout << n1 << " " << n2 << endl;
//
//	//�����б������lambda���ʽ
//	auto fun2 = [fun1] {cout << "hello c++" << endl; };
//	fun2();
//
//	//���Ƶı��ʽ
//	auto fun3 = [=, &n1](int n3)->int {return n1 * n1 + n3; };
//	cout << fun3(11) << endl;
//
//	//auto fun4 = [&n1, &n2](int n3) {n2 = n1 + n3; };
//	//fun1=fun4;
//
//	//��ֵ����
//	//mutable:Ĭ������£�lambda��������һ��const������mutable����ȡ���䳣���ԡ�
//	//ʹ�ø����η�ʱ�������б���ʡ�ԣ���ʹ����Ϊ�գ���mutable���ڲ����б�ͷ���ֵ֮��
//	int v1 = 12;
//	auto fun5 = [v1](int v2)mutable {v1 = v1 * 3; return v2 + v1; };
//	cout << fun5(2) << endl;
//
//	//����ʹ��һ��lambda��ʾ��������һ���µĸ���
//	auto fun6(fun5);
//	fun6(11);
//
//	//���Խ�lambda���ʽ��ֵ����ͬ���͵ĺ���
//	auto fun7 = [] {};
//	FP = fun7;
//	FP();
//
//	//����
//	//����1
//	//�º���
//	double rate = 0.8;
//	Rate r1(rate);
//	double rd = r1(20000, 2);
//	cout << rd << endl;
//
//	//lambda
//	auto r2 = [=](double money, int year)->double {return money * rate * year; };
//	double rd2 = r2(20000, 3);
//	cout << rd2 << endl;
//
//
//	//����2
//	int array[] = { 2,3,1,7,5,6,8,9 };
//	sort(array, array + sizeof(array) / sizeof(array[0]));
//	for (auto i : array)
//	{
//		cout << i << ' ';
//	}
//	cout << endl;
//
//	sort(array, array + sizeof(array) / sizeof(array[0]), [](int a, int b) {return a > b; });
//	for (auto i : array)
//	{
//		cout << i << ' ';
//	}
//	cout << endl;
//
//	//����3
//	Goods gds[] = { {"ƻ��",10},{"�㽶",6.1},{"����",7},{"����",12}};
//	sort(gds, gds + sizeof(gds) / sizeof(gds[0]), [](const Goods g1,const Goods g2)->bool {return g1.price > g2.price; });
//	for (auto i : gds)
//	{
//		cout << i.name << ' ' << i.price << endl;
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}