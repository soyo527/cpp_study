//#include<bits/stdc++.h>
//using namespace std;
//const int maxSize = 100;
//
//enum index { underflow, overflow };
//
//int array_index(int* arr, int n, int index)
//{
//	if (index < 0)	throw underflow;
//	if (index > n - 1) throw overflow;
//	return arr[index];
//}
//
//int main()
//{
//	try
//	{
//		int* arr = new int[5];
//		for (int i = 0; i < 5; i++)
//		{
//			arr[i] = i + 11;
//		}
//		cout << array_index(arr, 5, -2) << endl;
//	}
//	catch (index e)
//	{
//		if (e == underflow)
//			cout << "下标太小了" << endl;
//		else if (e == overflow)
//			cout << "下标太大了" << endl;
//	}
//
//	system("pause");
//	return 0;
//}