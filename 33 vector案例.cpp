//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	//����n�����n��1-100�����֣�װ��vector���ҳ������Сֵ
//	srand(time(0));
//	int n;
//	cin >> n;
//	vector<int> v(n);
//	for (int i = 0; i < v.size(); i++)
//	{
//		v[i] = rand() % 100 + 1;
//	}
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << endl;
//	}
//
//	int v_max = v[0], v_min = v[0];
//	for (int i = 0; i < v.size(); i++)
//	{
//		if (v[i] > v_max)
//			v_max = v[i];
//		if (v[i] < v_min)
//			v_min = v[i];
//	}
//	cout << "max:" << v_max << " min:" << v_min << endl;
//
//	system("pause");
//	return 0;
//}