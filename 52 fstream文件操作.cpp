//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	//ifstream支持>>操作，ofstream支持<<操作，fstream同时支持两种操作
//	fstream iof;
//	iof.open("student.txt", ios::in | ios::out | ios::trunc);
//	iof << "测试fstream " << endl;
//	iof << "1234567" << endl;
//	cout << "写入完毕！" << endl;
//
//	iof.close();
//
//	iof.open("student.txt", ios::in);
//	string str;
//	while (getline(iof, str))
//	{
//		cout << str << endl;
//	}
//
//	cout << "读取完毕！" << endl;
//
//	system("pause");
//	return 0;
//}