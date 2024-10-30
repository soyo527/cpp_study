//#include<bits/stdc++.h>
//using namespace std;
//
//template<class T>
//class Pair
//{
//public:
//	T values[2];
//public:
//	Pair(T first, T second)
//	{
//		values[0] = first;
//		values[1] = second;
//	}
//};
//
////测试数据类
//template<class T>
//class Test
//{
//public:
//	Test() {}
//	void setData(const T& x);
//	void showData();
//private:
//	T num;
//};
//
//template<class T>
//void Test<T>::setData(const T& x)
//{
//	num = x;
//}
//
//template<class T>
//void Test<T>::showData()
//{
//	cout << num << endl;
//}
//
////给模版取别名
////typedef Test<int> t;	//如果数据类型太多了会忘记，因此可以使用using
//template<class T>
//using t = Test<T>;
//
//int main()
//{
//	Pair<int> myInt(1, 2);
//	cout << myInt.values[0] << endl;
//	cout << myInt.values[1] << endl;
//
//	Pair<double> myDouble(3.14, 2.33);
//	cout << myDouble.values[0] << endl;
//	cout << myDouble.values[1] << endl;
//
//	cout << endl;
//
//	//测试数据类
//	//Test<int> t1;
//
//	t<int> t1;
//	t1.setData(112);
//	t1.showData();
//
//	system("pause");
//	return 0;
//}