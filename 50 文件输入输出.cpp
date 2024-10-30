//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	//文件写入
//	ofstream outf;
//
//	//两种覆盖原文件的方式
//	//outf.open("file.txt");
//	//outf.open("file.txt",ios::out);
//
//	//追加方式
//	outf.open("file.txt", ios::app);
//
//	outf << "	  山村咏怀" << endl;
//	outf << "	    邵雍" << endl;
//	outf << "一去二三里，烟村四五家。" << endl;
//	outf << "亭台六七座，八九十枝花。" << endl;
//
//	outf.close();
//
//
//	//文件读取
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
//	//多种读取方式
//	if (!infile.is_open())
//	{
//		cout << "文件打开失败！" << endl;
//	}
//
//	//1.效率低
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