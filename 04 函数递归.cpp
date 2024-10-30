//#include<bits/stdc++.h>
//using namespace std;
//
//int test1(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return test1(n - 1)+n;
//}
//
//int test2(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	else
//		return test2(n - 1) + test2(n - 2);
//}
//
//void test3(int n,char A,char B,char C)
//{
//	static int count = 1;	//统计移动次数
//	if (n == 1)
//	{
//		cout << "第" << count << "次：从" << A << "移动到" << B << endl;
//		count++;
//	}
//	else 
//	{
//		test3(n - 1, A, C, B);
//		cout << "第" << count << "次：从" << A << "移动到" << B << endl;
//		count++;
//		test3(n - 1, C, B, A);
//	}
//}
//
//int main()
//{
//	cout << test1(100) << endl;	//实现1到n的加法
//
//	cout << test2(8) << endl;		//实现斐波那契数列
//
//	test3(100, 'A', 'B', 'C');		//汉诺塔
//
//	system("pause");
//	return 0;
//}