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
//	static int count = 1;	//ͳ���ƶ�����
//	if (n == 1)
//	{
//		cout << "��" << count << "�Σ���" << A << "�ƶ���" << B << endl;
//		count++;
//	}
//	else 
//	{
//		test3(n - 1, A, C, B);
//		cout << "��" << count << "�Σ���" << A << "�ƶ���" << B << endl;
//		count++;
//		test3(n - 1, C, B, A);
//	}
//}
//
//int main()
//{
//	cout << test1(100) << endl;	//ʵ��1��n�ļӷ�
//
//	cout << test2(8) << endl;		//ʵ��쳲���������
//
//	test3(100, 'A', 'B', 'C');		//��ŵ��
//
//	system("pause");
//	return 0;
//}