//#include <iostream>
//
//
//using namespace std;
//
//
//
////��ͼ
//char map[10][21] = {
//	{"##################o#"},
//	{"#    ############# #"},
//	{"# ## ###########   #"},
//	{"# ##          ## ###"},
//	{"# ##########       #"},
//	{"# ##################"},
//	{"# ##      ##########"},
//	{"#            #######"},
//	{"############      ##"},
//	{"################# ##"},
//
//};
//
//char direction;  //�����ַ�
//int currentpr = 0, currentpc = 18;  //���λ��
//int newpr = currentpr, newpc = currentpc;  //��¼�߶���λ��
//bool gameOver = false;
//
//
//
//void showMap();
//void showMenu();
//bool isSuccess();
//
//
//
//int main() {
//
//	while (!gameOver)
//	{
//		system("cls");
//		showMap();
//
//		showMenu();
//
//		if (isSuccess()) {
//			cout << "�ɹ�����!" << endl;
//			return 0;
//		}
//
//		cin >> direction;
//		switch (direction)
//		{
//		case 'a':
//			newpc--;
//			break;
//		case 'd':
//			newpc++;
//			break;
//		case 'w':
//			newpr--;
//			break;
//		case 's':
//			newpr++;
//			break;
//		case 'q':
//			cout << "ȷ���˳���Ϸ�𣿣�Y/N)" << endl;
//			cin >> direction;
//			if (direction == 'Y')
//				gameOver = 1; //��Ϸ����
//		}
//
//		if (map[newpr][newpc] == ' ') {
//			map[newpr][newpc] = 'o';
//			map[currentpr][currentpc] = ' ';
//			currentpr = newpr;
//			currentpc = newpc;
//		}
//		else {
//			newpr = currentpr;
//			newpc = currentpc;
//		}
//	}
//
//
//
//	return 0;
//}
//
//
//bool isSuccess() {
//	if (map[9][17] == 'o') {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//void showMenu() {
//	cout << "up:w  down:s left:a right:d" << endl;
//	cout << "�����뷽���ַ�" << endl;
//}
//void showMap() {
//
//	for (int i = 0; i < 10; i++) {
//		cout << map[i] << endl;
//	}
//}
//
