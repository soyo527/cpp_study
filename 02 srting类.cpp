//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	//----------����string����----------
//	//��string�����ʼ��Ϊsָ����ַ���
//	string str1("Hello!");
//
//	//����һ������10��Ԫ�ص�string��������ÿ��Ԫ�ض���a
//	string str2(10, 'a');
//
//	//��һ��string�����ʼ��Ϊstring����str1
//	string str3(str1);
//
//	//����һ���յ�string���󣬳���Ϊ0
//	string str4;
//	
//	cout << str1 << endl;
//	cout << str2 << endl;
//	cout << str3 << endl;
//	cout << str4 << endl;
//
//	//----------��ȡstring���󳤶�----------
//	//size����
//	cout << str1.size() << endl;
//
//	//length����
//	cout << str2.length() << endl;
//
//	//----------����string����----------
//	string str5 = str1;
//	cout << str5 << endl;
//
//	//----------string�����ƴ��----------
//	//ֱ�����
//	string str6 = str1 + str2;
//	cout << str6 << endl;
//	
//	//��+=����
//	string str7 = str3;
//	str7 += str1;
//	cout << str7 << endl;
//
//	//��append����
//	str7.append(str2);
//	cout << str7 << endl;
//
//	str7.append("12312312");
//	cout << str7 << endl;
//
//	//��push_back����
//	str7.push_back('z');	//ֻ�ܼ�һ���ַ������ܼ��ַ�����
//	cout << str7 << endl;
//
//	//----------string����ıȽ�----------
//	//ֱ���÷��űȽ�
//	if (str1 > str2)
//		cout << "str1>str2" << endl;
//	else if (str1 == str2)
//		cout << "str1=str2" << endl;
//	else
//		cout << "str1<str2" << endl;
//
//	//��compare�����Ƚ�
//	string s1 = "aBcedf";
//	string s2 = "AbcdEf";
//	string s3 = "123456";
//	string s4 = "123abc";
//	int m = s1.compare(s2);	//s1��s2�����ıȽ�
//	int n = s1.compare(1, 5, s2);	//s1�е�"Bcedf"��s2�е�ȫ���Ƚ�
//	int p = s1.compare(1, 5, s2, 4, 2);	//s1�е�"Bcedf"��s2�е�"Ef"�Ƚ�
//	int q = s3.compare(0, 3, s4, 0, 3);	//s3�е�"123"��s2�е�"123"�Ƚ�
//
//	//----------string����Ĳ���----------
//	//˳�����
//	string s = "1234567890abcdefghijkl123";
//	cout << s.find("123") << endl;	//��дĬ�ϴ�0��ʼ,���ص��ǵ�һ�γ���ʱ������ĸ�±�
//	cout << s.find("1234", 1) << endl;	//�Ҳ�������npos=-1
//	cout << s.find("0az", 1, 2) << endl;	//��ǰ��2����ɵ��ַ���
//
//	//�������
//	cout << s.rfind("123") << endl;
//
//	//���Ҳ���������һ���ַ��״γ��ֵ�λ��
//	cout << s.find_first_of("j3k0") << endl;
//
//	//���Ҳ���������һ���ַ������ֵ�λ��
//	cout << s.find_last_of("j3k0") << endl;
//
//	//���ҵ�һ���������ڲ����е��ַ�
//	cout << s.find_first_not_of("12345789") << endl;
//
//	//�������һ���������ڲ����е��ַ�
//	cout << s.find_last_not_of("12345789") << endl;
//
//	//----------string�����ȡ�Ӵ�----------
//	cout << s.substr(3, 5) << endl;	//��posλ�ÿ�ʼ����ȡlen�����ȵ��Ӵ�
//
//	//----------string����������----------
//	s1 = "abc";
//	cout << s1.insert(1, "123") << endl;	//���±�Ϊ1��λ�ò���"123"
//
//	s1 = "abc";
//	cout << s1.insert(1, "123456", 2, 3) << endl;	//���±�Ϊ1��λ�ò���"123456"���±�Ϊ2��ʼ��3������345��
//
//	s1 = "abc";
//	cout << s1.insert(1, "123456", 2) << endl;	//���±�Ϊ1��λ�ò���"123456"�е�ǰ������
//
//	s1 = "abc";
//	cout << s1.insert(1, 10, '1') << endl;	//���±�Ϊ1��λ�ò���10��1
//
//	s1 = "abc";
//	s1.insert(s1.begin() + 1, 10, '2');
//	cout << s1 << endl;
//
//	system("pause");
//	return 0;
//}