//#include<bits/stdc++.h>
//#include<array>
//#include<forward_list>
//using namespace std;
//
//int main()
//{
//	//1.std::array保存在栈内存中，相比堆内存中的std::vector,它能够灵活的访问容器里面的元素，从而获得更高的性能。
//	//2.std::array会在编译时创建一个固定大小的数组，std::array不能够被隐式的转换成指针，使用std::array只需指定其类型和大小即可！
//	//3.c + 11封装了相关的数组模板类，不同于C风格数组，它不会自动退化成T * 类型，它能作为聚合类型聚合初始化。
//	//std::array是封装固定大小数组的容器，数组元素下标索引从0开始
//
//	//固定的数据类型和长度
//	array<int, 5> arr1;
//
//	//给部分或全部的初始值
//	array<int, 10>arr2 = { 1,2,3 };
//
//	//长度必须是常量
//	//int len = 3;
//	//array<int, len> arr3;
//
//	//几种访问的方法
//	cout << arr2[0] << endl;
//	cout << arr2.at(1) << endl;
//	cout << get<2>(arr2) << endl;
//
//	cout << arr2.front() << endl;
//	cout << arr2.back() << endl;
//
//
//	//forward_list（单向链表）
//	
//	//创建一个空的单向链表
//	forward_list<int> value1;
//
//	//包含n个元素的单向链表
//	forward_list<int> v2(10);
//
//	//给定长度和初始值
//	forward_list<int> v3(5, 11);
//
//	//通过拷贝构造函数创建
//	forward_list<int> v4(v3);
//
//	//通过拷贝其他类型的容器
//	int arr_num[] = { 1,2,3,4,5 };
//	forward_list<int> v5(arr_num,arr_num+3);
//
//	array<int, 10> arr_num2 = { 66,55,44,22,11,22,33,3,2,1 };
//	forward_list<int> v6(arr_num2.begin(), arr_num2.end());
//
//	v6.push_front(100);
//	v6.emplace_front(200);
//	cout << v6.front() << endl;
//
//	v6.sort();
//	for (auto i : v6)
//	{
//		cout << i << ' ';
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}