//
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//
//	cout << "-------------------�������ϵͳ-------------------" << endl;
//	cout << "�˵���" << endl;
//	cout << "1��� 2�ع��� 3�������� 4���޷�Ƭ 5ëѪ�� 6���Ŷ��� 7�������� 8ˮ��ţ��" << endl;
//	cout << "9������ 10��ˮ�� 11������ 12�ʳ��� 13������" << endl;
//	cout << "14���� 15ѩ�� 16���� 17���ͷ� 18������ 19Ӫ������" << endl;
//	cout << "�ײ�A(�Ż�10)����� �ع��� �������ӣ���ѡ��һ" << endl;
//	cout << "������ ��ˮ�� �����㣬��ѡ��һ" << endl;
//	cout << "���� ѩ�̣���ѡ��һ" << endl;
//	cout << "�ײ�B���Ż�12������� �ع��� �������� ˮ��ţ�⣬��ѡ��һ" << endl;
//	cout << "�ʳ��� �����棬��ѡ��һ" << endl;
//	cout << "���� ���ͷ� �����ȣ���ѡ��һ" << endl;
//	cout << "����������100Ԫ���ɼ�1Ԫ������һ������" << endl;
//
//	char c = 0;// ���������ַ�
//	int input = -1;
//	int fp = 0; //�Żݽ��
//	string arrmenu[19] = { "���","�ع���","��������","���޷�Ƭ","ëѪ��" ,"���Ŷ���","��������","ˮ��ţ��","������","��ˮ��","������","�ʳ���","������","����","ѩ��","����","���ͷ�","������","Ӫ������" };
//	int price[19] = { 60,30,20,25,32,15,45,50,12,10,13,12,10,5,5,6,10,8,9 };
//	int count[19] = { 0 ,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
//	int total = 0;
//	while (1) {
//		cout << "A����  B�ײ�  C���ˣ�������ĸȷ��)" << endl;
//		cin >> c;
//		if (c == 'A')
//		{
//			cout << "����������ȷ�ϵ�ͣ�����0����" << endl;
//			while (1)
//			{
//				cin >> input;
//				if (input == 0)
//				{
//					break;
//				}
//				switch (input) {
//				case 1:
//					count[0]++;
//					break;
//				case 2:
//					count[1]++;
//					break;
//				case 3:
//					count[2]++;
//					break;
//				case 4:
//					count[3]++;
//					break;
//				case 5:
//					count[4]++;
//					break;
//				case 6:
//					count[5]++;
//					break;
//				case 7:
//					count[6]++;
//					break;
//				case 8:
//					count[7]++;
//					break;
//				case 9:
//					count[8]++;
//					break;
//				case 10:
//					count[9]++;
//					break;
//				case 11:
//					count[10]++;
//					break;
//				case 12:
//					count[11]++;
//					break;
//				case 13:
//					count[12]++;
//					break;
//				case 14:
//					count[13]++;
//					break;
//				case 15:
//					count[14]++;
//					break;
//				case 16:
//					count[15]++;
//					break;
//				case 17:
//					count[16]++;
//					break;
//				case 18:
//					count[17]++;
//					break;
//				case 19:
//					count[18]++;
//					break;
//				}
//
//			}
//			total = 0;
//			for (int i = 0; i < 19; i++)
//			{
//				if (count[i] != 0) {
//					cout << arrmenu[i] << price[i] << "Ԫ,������" << count[i] << " С��:" << count[i] * price[i] << endl;
//					total += count[i] * price[i];
//				}
//			}
//			cout << "�ܼƣ�" << total - fp << "Ԫ,�Ż�" << fp << "Ԫ" << endl;
//		}
//		else if (c == 'B') {
//			cout << "�ײ�A  �ײ�B ��������ĸȷ�ϣ�" << endl;
//			cin >> c;
//			if (c == 'A') {
//				fp += 10;
//				cout << "1��� 2�ع��� 7��������" << endl;
//				cin >> input;
//				switch (input) {
//				case 1:
//					count[0]++;
//					break;
//				case 2:
//					count[1]++;
//					break;
//				case 7:
//					count[6]++;
//					break;
//				}
//				cout << "9������ 10��ˮ�� 11������" << endl;
//				cin >> input;
//				switch (input) {
//				case 9:
//					count[8]++;
//					break;
//				case 10:
//					count[9]++;
//					break;
//				case 11:
//					count[10]++;
//					break;
//				}
//				cout << "14���� 15ѩ��" << endl;
//				cin >> input;
//				switch (input) {
//				case 14:
//					count[13]++;
//					break;
//				case 15:
//					count[14]++;
//					break;
//
//				}
//			}
//			else if (c == 'B') {
//				fp += 12;
//				cout << "1��� 2�ع��� 7�������� 8ˮ��ţ��" << endl;
//				cin >> input;
//				switch (input) {
//				case 1:
//					count[0]++;
//					break;
//				case 2:
//					count[1]++;
//					break;
//				case 7:
//					count[6]++;
//					break;
//				case 8:
//					count[7]++;
//					break;
//				}
//				cout << "12�ʳ��� 13������" << endl;
//				cin >> input;
//				switch (input) {
//				case 12:
//					count[11]++;
//					break;
//				case 13:
//					count[12]++;
//					break;
//				}
//				cout << "16���� 17���ͷ� 18������" << endl;
//				cin >> input;
//				switch (input) {
//				case 16:
//					count[15]++;
//					break;
//				case 17:
//					count[16]++;
//					break;
//				case 18:
//					count[17]++;
//					break;
//
//				}
//			}
//			total = 0;
//			for (int i = 0; i < 19; i++)
//			{
//				if (count[i] != 0) {
//					cout << arrmenu[i] << price[i] << "Ԫ,������" << count[i] << " С��:" << count[i] * price[i] << endl;
//					total += count[i] * price[i];
//				}
//			}
//			cout << "�ܼƣ�" << total - fp << "Ԫ,�Ż�" << fp << "Ԫ" << endl;
//			total -= fp;
//		}
//		else if (c == 'C') {
//			if (total >= 100) {
//				cout << "������100Ԫ���Ƿ��1Ԫ����(Y/N)" << endl;
//
//				cin >> c;
//				if (c == 'Y') {
//					cout << "14���� 15ѩ�� 16����" << endl;
//					cin >> input;
//					total += 1;
//
//					switch (input)
//					{
//					case 14:
//						fp += price[13] - 1;
//						break;
//					case 15:
//						fp += price[14] - 1;
//						break;
//					case 16:
//						fp += price[15] - 1;
//						break;
//					}
//				}
//
//				cout << "����֧��" << total << "Ԫ���Ż�" << fp << "Ԫ" << endl;
//				cout << "-----------------��ӭ�´ι���----------------" << endl;
//			}
//			break;
//		}
//		else {
//			cout << "�����������ַ�ȷ��" << endl;
//		}
//
//	}
//
//	return 0;
//}
//
