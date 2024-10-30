//#include<bits/stdc++.h>
//using namespace std;
//
//template<class T>
//void mathHelper(T num[], int size)
//{
//	T max = num[0], min = num[0], total = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (num[i] > max)
//		{
//			max = num[i];
//		}
//		if (num[i] < min)
//		{
//			min = num[i];
//		}
//		total += num[i];
//	}
//	cout << "最大值：" << max << " 最小值：" << min << " 平均值：" << total/double(size) << endl;
//}
//
//
//int main()
//{
//	int num[5] = { 1,2,3,4,5 };
//	mathHelper<int>(num, 5);
//
//	double num1[5] = { 1.1,2.2,3.3,4.4,5.5 };
//	mathHelper<double>(num1, 5);
//
//	system("pause");
//	return 0;
//}