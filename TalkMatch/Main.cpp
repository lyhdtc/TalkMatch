#include<iostream>
using namespace std;
#include"speechManager.h"

int main() {
	SpeechManager sm;
	int choice = 0;
	

	while (true) {
		sm.show_Menu();

		cout << "ÇëÊäÈëÄúµÄÑ¡Ôñ£º" << endl;
		cin >> choice;
		switch (choice) {
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 0:
				sm.exitSystem();
				break;
			default:
				system("cls");
				break;

		}
	}

	system("pause");
	return 0;
}