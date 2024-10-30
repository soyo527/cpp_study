//#include<bits/stdc++.h>
//using namespace std;
//
//void deleteInt(int* p)
//{
//	delete[] p;
//}
//
//class CB;
//class CA
//{
//private:
//	weak_ptr<CB> m_ptr_b;
//public:
//	CA()
//	{
//		cout << "CA() called" << endl;
//	}
//	~CA()
//	{
//		cout << "~CA() called" << endl;
//	}
//	void set_ptr(shared_ptr<CB>& ptr)
//	{
//		m_ptr_b = ptr;
//	}
//	void b_use_count()
//	{
//		cout << "b_use_count:" << m_ptr_b.use_count() << endl;
//	}
//	void show()
//	{
//		cout << "this is class CA" << endl;
//	}
//};
//
//class CB
//{
//private:
//	shared_ptr	<CA> m_ptr_a;
//public:
//	CB()
//	{
//		cout << "CB() called" << endl;
//	}
//	~CB()
//	{
//		cout << "~CB() called" << endl;
//	}
//	void set_ptr(shared_ptr<CA>& ptr)
//	{
//		m_ptr_a = ptr;
//	}
//	void a_use_count()
//	{
//		cout << "a_use_count:" << m_ptr_a.use_count() << endl;
//	}
//	void show()
//	{
//		cout << "this is class CB" << endl;
//	}
//};
//
//int main()
//{	
//	//shared_ptr
//	shared_ptr<int> p1;
//	shared_ptr<int> p2(nullptr);
//
//	shared_ptr<int> p3(new int(3));
//	shared_ptr<int> p4 = make_shared<int>(3);
//
//	shared_ptr<int> p5 = p4;
//	shared_ptr<int> p6(p5);
//
//	shared_ptr<int> p7(move(p6));
//
//	//指定default_delete作为释放规则
//	shared_ptr<int>p_1(new int[10], default_delete<int[]>());
//
//	//自定义释放规则
//	shared_ptr<int> p_2(new int[10],deleteInt /*[](int* p) {delete[]p; }*/);
//
//	//weak_ptr
//	shared_ptr<CA> ptr_a(new CA());
//	shared_ptr<CB> ptr_b(new CB());
//
//	cout << "a use count:" << ptr_a.use_count() << endl;
//	cout << "b use count:" << ptr_b.use_count() << endl;
//
//	ptr_a->set_ptr(ptr_b);
//	ptr_b->set_ptr(ptr_a);
//
//	cout << "a use count:" << ptr_a.use_count() << endl;
//	cout << "b use count:" << ptr_b.use_count() << endl;
//
//	system("pause");
//	return 0;
//}