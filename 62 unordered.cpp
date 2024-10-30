//#include<bits/stdc++.h>
//#include<unordered_set>
//#include<unordered_map>
//using namespace std;
//
//int main()
//{
//	//无序容器不进行排序
//
//	//unordered_set
//	unordered_set<int> set1;
//	unordered_set<int> set2(set1);
//	unordered_set<int> set3(set1.begin(), set1.end());
//
//	int arr[] = { 1,2,3,4,5 };
//	unordered_set<int> set4(arr, arr + 5);
//	unordered_set<int> set5(move(set1));
//	unordered_set<int> set6 = { 11,22,55,33,77 };
//	
//	cout << set6.empty() << endl;
//	cout << (*set6.find(11)) << endl;
//	cout << set6.count(11) << endl;
//
//	set6.insert(100);
//	set6.insert({ 111,222,333,444 });
//	set6.insert(set6.begin(), 999);
//	set6.insert(set4.begin(), set4.end());
//
//	for (auto i : set6)
//	{
//		cout << i << ' ';
//	}
//	cout << endl;
//
//	//unordered_multiset
//	unordered_multiset<int> um1 = { 11,33,11,22,55,66,99,33 };
//	for (auto i : um1)
//	{
//		cout << i << ' ';
//	}
//	cout << endl;
//
//	cout << um1.empty() << endl;
//	cout << um1.max_size() << endl;
//	cout << um1.size() << endl;
//
//	um1.insert(200);
//
//
//	//unordered_map
//	unordered_map<string, int> mp1;
//	unordered_map<string, int> mp2 = { {"aa",11},{"bb",22},{"cc",33} };
//	unordered_map<string, int> mp3(mp2);
//	unordered_map<string, int> mp4(mp2.begin(), mp2.end());
//	//typedef unordered_map<string, int> mp5;
//	//mp5 mp6 = { {"aaa",111},{"bbb",222},{"ccc",333} };
//	//mp5 mp7;
//	//merge(mp4.begin(), mp4.end(), mp6.begin(), mp6.end(), mp7.begin());
//	//mp5 mp8 = mp7;
//
//	cout << mp2.at("aa") << endl;
//	for (auto i : mp2)
//	{
//		cout << i.first << ' ' << i.second << endl;;
//	}
//
//	system("pause");
//	return 0;
//}