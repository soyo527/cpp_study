//#include<bits/stdc++.h>
//#include<array>
//#include<forward_list>
//using namespace std;
//
//int main()
//{
//	//1.std::array������ջ�ڴ��У���ȶ��ڴ��е�std::vector,���ܹ����ķ������������Ԫ�أ��Ӷ���ø��ߵ����ܡ�
//	//2.std::array���ڱ���ʱ����һ���̶���С�����飬std::array���ܹ�����ʽ��ת����ָ�룬ʹ��std::arrayֻ��ָ�������ͺʹ�С���ɣ�
//	//3.c + 11��װ����ص�����ģ���࣬��ͬ��C������飬�������Զ��˻���T * ���ͣ�������Ϊ�ۺ����;ۺϳ�ʼ����
//	//std::array�Ƿ�װ�̶���С���������������Ԫ���±�������0��ʼ
//
//	//�̶����������ͺͳ���
//	array<int, 5> arr1;
//
//	//�����ֻ�ȫ���ĳ�ʼֵ
//	array<int, 10>arr2 = { 1,2,3 };
//
//	//���ȱ����ǳ���
//	//int len = 3;
//	//array<int, len> arr3;
//
//	//���ַ��ʵķ���
//	cout << arr2[0] << endl;
//	cout << arr2.at(1) << endl;
//	cout << get<2>(arr2) << endl;
//
//	cout << arr2.front() << endl;
//	cout << arr2.back() << endl;
//
//
//	//forward_list����������
//	
//	//����һ���յĵ�������
//	forward_list<int> value1;
//
//	//����n��Ԫ�صĵ�������
//	forward_list<int> v2(10);
//
//	//�������Ⱥͳ�ʼֵ
//	forward_list<int> v3(5, 11);
//
//	//ͨ���������캯������
//	forward_list<int> v4(v3);
//
//	//ͨ�������������͵�����
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