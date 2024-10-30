//#include<bits/stdc++.h>
//using namespace std;
//
////基类
//class Animal
//{
//private:
//	string name;
//	int weight;
//public:
//	Animal(string name,int weight):name(name),weight(weight){}
//	void who()
//	{
//		cout << "我是：" << this->name << "，体重为：" << this->weight << "磅" << endl;
//	}
//};
//
////派生类
//class Lion :public Animal
//{
//public:
//	using Animal::Animal;
//	//Lion(string name, int weight) :Animal(name, weight){}
//};
//
//class Aardvark :public Animal
//{
//public:
//	using Animal::Animal;
//	//Aardvark(string name, int weight) :Animal(name, weight) {}
//};
//
//int main()
//{
//	Lion l1("Leo", 400);
//	l1.who();
//
//	Aardvark a1("Algernon", 50);
//	a1.who();
//
//	system("pause");
//	return 0;
//}