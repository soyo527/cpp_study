//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	//----------getline��ȡ���У����Խ��ܿո�----------
//	cout << "���ж�ȡ" << endl;
//	string s1;
//	getline(cin, s1);
//	cout << s1 << endl;
//
//	string s2 = "abcdefg";
//
//	//----------���������ʽ----------
//	cout << "���������ʽ" << endl;
//	//c++11 ������
//	for (auto c : s2)
//	{
//		cout << c << " ";
//	}
//
//	cout << endl;
//
//	cout << s2[0] << endl;
//
//	//ʹ��size()
//	for (int i = 0; i < s2.size(); i++)
//	{
//		cout << s2[i] << " ";
//	}
//
//	cout << endl;
//
//	//ʹ�õ�����
//	for (auto i = s2.begin(); i != s2.end(); i++)
//	{
//		cout << *i << " ";
//	}
//
//	cout << endl;
//
//	//----------���ֿ�����ʽ----------
//	cout << "���ֿ�����ʽ" << endl;
//	string s3 = "hello";
//
//	string s4(s3,1);	//ello
//	cout << s4 << endl;
//
//	//string s5(s3, 8);
//	//cout << s5 << endl;	//����
//
//	string s5(s3, s3.size());	//s5�ǿմ�����s3��ĩβ��ʼ����
//	cout << s5 << endl;
//
//	string s6(s3, 0, 3);	//hel
//	cout << s6 << endl;
//
//	string s7(s3, 2, 10);
//	cout << s7 << endl;	//���±�Ϊ2��ʼ����10�������ǲ�����ֻ����llo
//
//	string s8(s3, 5, 3);
//	cout << s8 << endl;
//
//	//----------substr����----------
//	cout << "substr����" << endl;
//	string s = "value";
//	string s_1 = s.substr();	//ȫ������
//	cout << s_1 << endl;
//
//	string s_2 = s.substr(3);	//���±�Ϊ3�Ŀ�ʼ������ue
//	cout << s_2 << endl;
//
//	string s_3 = s.substr(s.size());	//��ĩβ��ʼ���������Ϊ��
//	cout << s_3 << endl;
//
//	//string s_4 = s.substr(10);		//������Χ������
//	//cout << s_4 << endl;
//
//	string s_5 = s.substr(2, 3);
//	cout << s_5 << endl;
//
//	//string s_6 = s.substr(6, 2);		//������Χ������	
//	//cout << s_6 << endl;
//
//	string s_7 = s.substr(3, 10);	//���ȳ������ᱨ��
//	cout << s_7 << endl;
//
//	//----------insert����----------
//	cout << "insert����" << endl;
//	string s__1 = "value";
//
//	s__1.insert(s__1.begin(), 's');	//�ڿ�ʼλ�ò���һ��s
//	cout << s__1 << endl;
//
//	s__1.insert(s__1.begin(), 3, 'a');		//�ڿ�ʼλ�ò���3��a
//	cout << s__1 << endl;
//
//	s__1.insert(s__1.begin(), s__1.begin()+5, s__1.begin()+7);	
//	//iterator insert(iterator pos, InputIterator first, InputIterator last);
//	//��λ��pos�������first��last��Ԫ�ء�
//	cout << s__1 << endl; 
//
//	s__1.insert(s__1.end(), { '1','2' });		//��ĩβ����12
//	cout << s__1 << endl;
//
//	//----------earse����----------
//	cout << "earse����" << endl;
//
//	s1 = "value";
//	s2 = "value";
//	s3 = "value";
//	s4 = "value";
//
//	s1.erase();	//ȫ��ɾ��
//	cout << s1 << endl;
//
//	s2.erase(1, 2);	//���±�Ϊ1��Ԫ�ؿ�ʼɾ��2��Ԫ��
//	cout << s2 << endl;
//
//	s3.erase(s3.begin() + 1);		//ɾ���±�Ϊ1��Ԫ��
//	cout << s3 << endl;
//
//	s4.erase(s4.begin(), s4.begin() + 2);	//ɾ��[0,2)��Ԫ��
//	cout << s4 << endl;
//
//	//----------append����----------
//	cout << "append����" << endl;
//
//	s1 = "C++";
//	s1.append(" program");	//��s1����� program
//	cout << s1 << endl;
//
//	//----------replace����----------
//	cout << "replace����" << endl;
//	
//	s = "I very love China";
//	const char* cp1 = "truly";
//	const char* cp2 = "truly!!!";
//	string str1 = "really";
//	string str2 = "really";
//
//	s.replace(2, 4, cp1);	//��s���±�Ϊ2��ʼ��4��Ԫ���滻Ϊcp1ָ����ַ���
//	cout << s << endl;
//
//	s.replace(2, 5, cp2, 5);	//��s���±�Ϊ2��ʼ��5��Ԫ���滻Ϊcp2ָ����ַ�����ǰ����ַ�
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