//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	//�ļ�д��
//	ofstream outf;
//
//	//���ָ���ԭ�ļ��ķ�ʽ
//	//outf.open("file.txt");
//	//outf.open("file.txt",ios::out);
//
//	//׷�ӷ�ʽ
//	outf.open("file.txt", ios::app);
//
//	outf << "	  ɽ��ӽ��" << endl;
//	outf << "	    ��Ӻ" << endl;
//	outf << "һȥ������̴�����ҡ�" << endl;
//	outf << "̨ͤ���������˾�ʮ֦����" << endl;
//
//	outf.close();
//
//
//	//�ļ���ȡ
//	//char cf[1024];
//	//string cfs;
//	char cf;
//
//	ifstream infile;
//	infile.open("file.txt", ios::in);
//
//	//infile >> cf;
//	//infile >> cfs;
//	//cout << cf << endl;
//	//cout << cfs << endl;
//
//	//while (!infile.eof())
//	//{
//	//	infile.get(cf);
//	//	cout << cf ;
//	//}
//
//	//���ֶ�ȡ��ʽ
//	if (!infile.is_open())
//	{
//		cout << "�ļ���ʧ�ܣ�" << endl;
//	}
//
//	//1.Ч�ʵ�
//	//char c;
//	//while ((c = infile.get()) != EOF)
//	//{
//	//	cout << c;
//	//}
//
//	//2.string
//	//string str;
//	//while (getline(infile, str))
//	//{
//	//	cout << str << endl;
//	//}
//
//	//3.char []
//	//char buf[1024] = { 0 };
//	//while (infile >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//	
//	//4.char []
//	char buf[1024];
//	while (infile.getline(buf, sizeof(buf)))
//	{
//		cout << buf << endl;
//	}
//
//	infile.close();
//
//	system("pause");
//	return 0;
//}