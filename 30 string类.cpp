//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	//----------getline读取整行，可以接受空格----------
//	cout << "整行读取" << endl;
//	string s1;
//	getline(cin, s1);
//	cout << s1 << endl;
//
//	string s2 = "abcdefg";
//
//	//----------几种输出方式----------
//	cout << "几种输出方式" << endl;
//	//c++11 新特性
//	for (auto c : s2)
//	{
//		cout << c << " ";
//	}
//
//	cout << endl;
//
//	cout << s2[0] << endl;
//
//	//使用size()
//	for (int i = 0; i < s2.size(); i++)
//	{
//		cout << s2[i] << " ";
//	}
//
//	cout << endl;
//
//	//使用迭代器
//	for (auto i = s2.begin(); i != s2.end(); i++)
//	{
//		cout << *i << " ";
//	}
//
//	cout << endl;
//
//	//----------几种拷贝方式----------
//	cout << "几种拷贝方式" << endl;
//	string s3 = "hello";
//
//	string s4(s3,1);	//ello
//	cout << s4 << endl;
//
//	//string s5(s3, 8);
//	//cout << s5 << endl;	//报错
//
//	string s5(s3, s3.size());	//s5是空串，从s3的末尾开始拷贝
//	cout << s5 << endl;
//
//	string s6(s3, 0, 3);	//hel
//	cout << s6 << endl;
//
//	string s7(s3, 2, 10);
//	cout << s7 << endl;	//从下标为2开始拷贝10个，但是不够，只能是llo
//
//	string s8(s3, 5, 3);
//	cout << s8 << endl;
//
//	//----------substr函数----------
//	cout << "substr函数" << endl;
//	string s = "value";
//	string s_1 = s.substr();	//全部拷贝
//	cout << s_1 << endl;
//
//	string s_2 = s.substr(3);	//从下标为3的开始拷贝，ue
//	cout << s_2 << endl;
//
//	string s_3 = s.substr(s.size());	//从末尾开始拷贝，结果为空
//	cout << s_3 << endl;
//
//	//string s_4 = s.substr(10);		//超出范围，报错
//	//cout << s_4 << endl;
//
//	string s_5 = s.substr(2, 3);
//	cout << s_5 << endl;
//
//	//string s_6 = s.substr(6, 2);		//超出范围，报错	
//	//cout << s_6 << endl;
//
//	string s_7 = s.substr(3, 10);	//长度超出不会报错
//	cout << s_7 << endl;
//
//	//----------insert函数----------
//	cout << "insert函数" << endl;
//	string s__1 = "value";
//
//	s__1.insert(s__1.begin(), 's');	//在开始位置插入一个s
//	cout << s__1 << endl;
//
//	s__1.insert(s__1.begin(), 3, 'a');		//在开始位置插入3个a
//	cout << s__1 << endl;
//
//	s__1.insert(s__1.begin(), s__1.begin()+5, s__1.begin()+7);	
//	//iterator insert(iterator pos, InputIterator first, InputIterator last);
//	//在位置pos处插入从first到last的元素。
//	cout << s__1 << endl; 
//
//	s__1.insert(s__1.end(), { '1','2' });		//在末尾插入12
//	cout << s__1 << endl;
//
//	//----------earse函数----------
//	cout << "earse函数" << endl;
//
//	s1 = "value";
//	s2 = "value";
//	s3 = "value";
//	s4 = "value";
//
//	s1.erase();	//全部删除
//	cout << s1 << endl;
//
//	s2.erase(1, 2);	//从下标为1的元素开始删除2个元素
//	cout << s2 << endl;
//
//	s3.erase(s3.begin() + 1);		//删除下标为1的元素
//	cout << s3 << endl;
//
//	s4.erase(s4.begin(), s4.begin() + 2);	//删除[0,2)的元素
//	cout << s4 << endl;
//
//	//----------append函数----------
//	cout << "append函数" << endl;
//
//	s1 = "C++";
//	s1.append(" program");	//在s1后面加 program
//	cout << s1 << endl;
//
//	//----------replace函数----------
//	cout << "replace函数" << endl;
//	
//	s = "I very love China";
//	const char* cp1 = "truly";
//	const char* cp2 = "truly!!!";
//	string str1 = "really";
//	string str2 = "really";
//
//	s.replace(2, 4, cp1);	//将s的下标为2开始的4个元素替换为cp1指向的字符串
//	cout << s << endl;
//
//	s.replace(2, 5, cp2, 5);	//将s的下标为2开始的5个元素替换为cp2指向的字符串的前五个字符
//	cout << s << endl;
//
//	s.replace(2, 5, str1);
//	cout << s << endl;
//
//	s.replace(2, 6, str2, 0, 6);
//	cout << s << endl;
//
//	s.replace(2, 6, 6, '*');
//	cout << s << endl;
//
//	system("pause");
//	return 0;
//}