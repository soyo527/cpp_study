//#include<bits/stdc++.h>
//using namespace std;
//
//void print01(int val)
//{
//	cout << val << ' ';
//}
//
//class print02		//�º���
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << ' ';
//	}
//};
//
//class Transform
//{
//public:
//	int operator()(int v)
//	{
//		return v + 100;
//	}
//};
//
//int main()
//{
//	//----------for_each����----------
//	cout << "for_each����" << endl;
//
//	vector<int> v = { 1,2,3,4,5 };
//	for_each(v.begin(), v.end(), print01);
//	cout << endl;
//	for_each(v.begin(), v.end(), print02());
//	cout << endl;
//
//	//----------transform����----------
//	cout << "transform����" << endl;
//	
//	vector<int> vTarget;
//	vTarget.resize(v.size()-3);
//	transform(v.begin(), v.end() - 3, vTarget.begin(), Transform());
//	for_each(vTarget.begin(), vTarget.end(), print02());
//	cout << endl;
//	
//	system("pause");
//	return 0;
//}