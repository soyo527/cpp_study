//#include<bits/stdc++.h>
//using namespace std;
//
//class Student
//{
//public:
//	Student() {}
//	Student(string name, int age) :name(name), age(age) {}
//	void printInfo()
//	{
//		cout << this->name << " " << this->age << endl;
//	}
//protected:
//	string name;
//	int age;
//};
//
//int main()
//{
//
//	//����
//	ofstream of;
//	of.open("student.txt", ios::binary | ios::out);
//	Student	s1("����", 22);
//	of.write((const char*)&s1, sizeof(Student));
//	of.close();
//
//	//��ȡ
//	ifstream bif;
//	bif.open("student.txt", ios::in | ios::binary);
//	Student s;
//	bif.read((char*)&s, sizeof(Student));
//	s.printInfo();
//	bif.close();
//
//	system("pause");
//	return 0;
//}