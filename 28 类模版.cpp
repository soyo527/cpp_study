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
////����������
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
////��ģ��ȡ����
////typedef Test<int> t;	//�����������̫���˻����ǣ���˿���ʹ��using
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
//	//����������
//	//Test<int> t1;
//
//	t<int> t1;
//	t1.setData(112);
//	t1.showData();
//
//	system("pause");
//	return 0;
//}