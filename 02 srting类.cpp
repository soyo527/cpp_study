//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	//----------创建string对象----------
//	//将string对象初始化为s指向的字符串
//	string str1("Hello!");
//
//	//创建一个包含10个元素的string对象，其中每个元素都是a
//	string str2(10, 'a');
//
//	//将一个string对象初始化为string对象str1
//	string str3(str1);
//
//	//创建一个空的string对象，长度为0
//	string str4;
//	
//	cout << str1 << endl;
//	cout << str2 << endl;
//	cout << str3 << endl;
//	cout << str4 << endl;
//
//	//----------获取string对象长度----------
//	//size方法
//	cout << str1.size() << endl;
//
//	//length方法
//	cout << str2.length() << endl;
//
//	//----------复制string对象----------
//	string str5 = str1;
//	cout << str5 << endl;
//
//	//----------string对象的拼接----------
//	//直接相加
//	string str6 = str1 + str2;
//	cout << str6 << endl;
//	
//	//用+=符号
//	string str7 = str3;
//	str7 += str1;
//	cout << str7 << endl;
//
//	//用append函数
//	str7.append(str2);
//	cout << str7 << endl;
//
//	str7.append("12312312");
//	cout << str7 << endl;
//
//	//用push_back函数
//	str7.push_back('z');	//只能加一个字符，不能加字符串！
//	cout << str7 << endl;
//
//	//----------string对象的比较----------
//	//直接用符号比较
//	if (str1 > str2)
//		cout << "str1>str2" << endl;
//	else if (str1 == str2)
//		cout << "str1=str2" << endl;
//	else
//		cout << "str1<str2" << endl;
//
//	//用compare函数比较
//	string s1 = "aBcedf";
//	string s2 = "AbcdEf";
//	string s3 = "123456";
//	string s4 = "123abc";
//	int m = s1.compare(s2);	//s1和s2完整的比较
//	int n = s1.compare(1, 5, s2);	//s1中的"Bcedf"和s2中的全部比较
//	int p = s1.compare(1, 5, s2, 4, 2);	//s1中的"Bcedf"和s2中的"Ef"比较
//	int q = s3.compare(0, 3, s4, 0, 3);	//s3中的"123"和s2中的"123"比较
//
//	//----------string对象的查找----------
//	//顺序查找
//	string s = "1234567890abcdefghijkl123";
//	cout << s.find("123") << endl;	//不写默认从0开始,返回的是第一次出现时的首字母下标
//	cout << s.find("1234", 1) << endl;	//找不到返回npos=-1
//	cout << s.find("0az", 1, 2) << endl;	//找前面2个组成的字符串
//
//	//逆序查找
//	cout << s.rfind("123") << endl;
//
//	//查找参数中任意一个字符首次出现的位置
//	cout << s.find_first_of("j3k0") << endl;
//
//	//查找参数中任意一个字符最后出现的位置
//	cout << s.find_last_of("j3k0") << endl;
//
//	//查找第一个不包含在参数中的字符
//	cout << s.find_first_not_of("12345789") << endl;
//
//	//查找最后一个不包含在参数中的字符
//	cout << s.find_last_not_of("12345789") << endl;
//
//	//----------string对象获取子串----------
//	cout << s.substr(3, 5) << endl;	//从pos位置开始，截取len个长度的子串
//
//	//----------string对象插入操作----------
//	s1 = "abc";
//	cout << s1.insert(1, "123") << endl;	//在下标为1的位置插入"123"
//
//	s1 = "abc";
//	cout << s1.insert(1, "123456", 2, 3) << endl;	//在下标为1的位置插入"123456"中下标为2开始的3个数（345）
//
//	s1 = "abc";
//	cout << s1.insert(1, "123456", 2) << endl;	//在下标为1的位置插入"123456"中的前两个数
//
//	s1 = "abc";
//	cout << s1.insert(1, 10, '1') << endl;	//在下标为1的位置插入10个1
//
//	s1 = "abc";
//	s1.insert(s1.begin() + 1, 10, '2');
//	cout << s1 << endl;
//
//	system("pause");
//	return 0;
//}