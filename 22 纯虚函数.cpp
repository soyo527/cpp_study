//#include<bits/stdc++.h>
//using namespace std;
//
////抽象基类(不能实例化)
//class AbstractDrinking
//{
//public:
//	//烧水
//	virtual void boil() = 0;
//	
//	//泡
//	virtual void brow() = 0;
//	
//	//倒入杯中
//	virtual void pourCup() = 0;
//	
//	//加辅料
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
////子类制作咖啡
//class Coffee :public AbstractDrinking
//{
//public:
//	virtual void boil()
//	{
//		cout << "煮山泉水" << endl;
//	}
//
//	virtual void brow()
//	{
//		cout << "泡咖啡" << endl;
//	}
//
//	virtual void pourCup()
//	{
//		cout << "咖啡倒入杯子" << endl;
//	}
//
//	virtual void putSomething()
//	{
//		cout << "加牛奶" << endl;
//	}
//};
//
////子类泡茶
//class Tea :public AbstractDrinking
//{
//public:
//	virtual void boil()
//	{
//		cout << "煮白开水" << endl;
//	}
//
//	virtual void brow()
//	{
//		cout << "泡茶" << endl;
//	}
//
//	virtual void pourCup()
//	{
//		cout << "茶倒入杯子" << endl;
//	}
//
//	virtual void putSomething()
//	{
//		cout << "加盐" << endl;
//	}
//};
//
////业务类
//void DoBussiness(AbstractDrinking *drink)
//{
//	drink->makeDrink();
//	delete drink;
//}
//
//int main()
//{
//	//纯虚函数：仅想对基类进行向上类型转换，使用他的接口	，不希望用户实际创建一个基类的对象
//	//当继承一个抽象类时，必须实现所有的纯虚函数，否则继承出的类也是抽象类
//	DoBussiness(new Coffee);
//	cout << endl;
//	DoBussiness(new Tea);
//
//
//	system("pause");
//	return 0;
//}