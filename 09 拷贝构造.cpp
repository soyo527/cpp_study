//#include<bits/stdc++.h>
//using namespace std;
//
//class Complex
//{
//public:
//	double m_real, m_image;
//	Complex(double real, double image)
//	{
//		m_real = real;
//		m_image = image;
//	}
//	//编写拷贝构造函数，默认的拷贝构造函数就不存在了
//	Complex(const Complex& c)
//	{
//		m_real = c.m_real;
//		m_image = c.m_image;
//		cout << "自己编写的拷贝构造被调用" << endl;
//	}
//};
//
//
//int main()
//{
//	//拷贝构造
//	Complex c1(1, 2);
//	Complex c2(c1);
//	cout << c2.m_real << endl << c2.m_image << endl;
//
//	system("pause");
//	return 0;
//}