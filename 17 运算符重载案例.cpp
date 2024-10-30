//#include<bits/stdc++.h>
//using namespace std;
//
//class Animal
//{
//private:
//	int age;
//public:
//	Animal(int age)
//	{
//		this->age = age;
//	}
//	Animal(){}
//
//	bool operator>(Animal& a)
//	{
//		if (this->age > a.age)
//			return true;
//		else
//			return false;
//	}
//	bool operator<(Animal& a)
//	{
//		if (this->age < a.age)
//			return true;
//		else
//			return false;
//	}
//	bool operator==(Animal& a)
//	{
//		if (this->age== a.age)
//			return true;
//		else
//			return false;
//	}
//};
//
//int main()
//{
//	Animal a1(10), a2(20), a3(30);
//	if (a1 < a2)
//	{
//		cout << "a1<a2" << endl;
//	}
//	else if (a1 == a2)
//	{
//		cout << "a1==a2" << endl;
//	}
//	else if (a1 > a2)
//	{
//		cout << "a1>a2" << endl;
//	}
//
//	system("pause");
//	return 0;
//}