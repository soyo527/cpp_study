//#include<bits/stdc++.h>
//using namespace std;
//
//void myPrint(int val)
//{
//	cout << val << ' ';
//}
//
//class Greater4
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 4;
//	}
//};
//
//int main()
//{
//	//----------copy函数----------
//	cout << "copy函数" << endl;
//
//	vector<int> v1 = { 1,2,3,4,5,5,5,5,6,7,8,9 };
//	vector<int> v2;
//
//	v2.resize(v1.size());
//	copy(v1.begin(), v1.end(), v2.begin());
//	for_each(v2.begin(), v2.end(),myPrint);
//	cout << endl;
//
//	//----------replace函数----------
//	cout << "replace函数" << endl;
//
//	replace(v1.begin(), v1.end(), 5, 10);
//	for_each(v1.begin(), v1.end(), myPrint);
//	cout << endl;
//
//	//----------replace_if函数----------
//	cout << "replace_if函数" << endl;
//
//	replace_if(v1.begin(), v1.end(), Greater4(),1000);
//	for_each(v1.begin(), v1.end(), myPrint);
//	cout << endl;
//
//	//----------swap函数----------
//	cout << "swap函数" << endl;
//
//	swap(v1, v2);
//	for_each(v1.begin(), v1.end(), myPrint);
//	cout << endl;
//	for_each(v2.begin(), v2.end(), myPrint);
//	cout << endl;
//
//	system("pause");
//	return 0;
//}