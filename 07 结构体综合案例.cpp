//#include<bits/stdc++.h>
//using namespace std;
//
//typedef struct student
//{
//	string name;
//	int age;
//	int score_1;
//	int score_2;
//	int score_3;
//	int score_sum;
//}student;
//
//int main()
//{
//	int n;
//	int best_stu = 0;
//	cin >> n;
//	student* s = new student[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> s[i].name >> s[i].age >> s[i].score_1 >> s[i].score_2 >> s[i].score_3;
//		s[i].score_sum = s[i].score_1 + s[i].score_2 + s[i].score_3;
//		if (s[i].score_sum > s[best_stu].score_sum)
//			best_stu = i;
//	}
//	cout << s[best_stu].name << " " << s[best_stu].age << " " << s[best_stu].score_1 << " " << s[best_stu].score_2 << " " << s[best_stu].score_3;
//	delete[] s;
//	system("pause");
//	return 0;
//}