//#include<bits/stdc++.h>
//using namespace std;
//
//void (*FP)();//函数指针
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
//	//最简单的lambda表达式无意义
//	[] {};
//
//	//省略参数列表和返回值类型，返回类型由编译器来推导
//	int n1 = 100, n2 = 200;
//	auto fun0 = [&n1, &n2] {return n1 + n2; };
//	cout << fun0() << endl;
//
//	//省略返回值类型
//	auto fun1 = [&n1, &n2](int n3) {n2 = n1 + n3; };
//	fun1(300);
//	cout << n1 << " " << n2 << endl;
//
//	//捕获列表可以是lambda表达式
//	auto fun2 = [fun1] {cout << "hello c++" << endl; };
//	fun2();
//
//	//完善的表达式
//	auto fun3 = [=, &n1](int n3)->int {return n1 * n1 + n3; };
//	cout << fun3(11) << endl;
//
//	//auto fun4 = [&n1, &n2](int n3) {n2 = n1 + n3; };
//	//fun1=fun4;
//
//	//赋值捕获
//	//mutable:默认情况下，lambda函数总是一个const函数，mutable可以取消其常量性。
//	//使用该修饰符时，参数列表不可省略（即使参数为空）。mutable放在参数列表和返回值之间
//	int v1 = 12;
//	auto fun5 = [v1](int v2)mutable {v1 = v1 * 3; return v2 + v1; };
//	cout << fun5(2) << endl;
//
//	//允许使用一个lambda表示拷贝构造一个新的副本
//	auto fun6(fun5);
//	fun6(11);
//
//	//可以将lambda表达式赋值给相同类型的函数
//	auto fun7 = [] {};
//	FP = fun7;
//	FP();
//
//	//案例
//	//案例1
//	//仿函数
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
//	//案例2
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
//	//案例3
//	Goods gds[] = { {"苹果",10},{"香蕉",6.1},{"橙子",7},{"梨子",12}};
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