#include<iostream>
using namespace std;
#include"speechManager.h"

int main() {
	
	int choice = 0;
	

	while (true) {
		SpeechManager::getInstance().show_Menu();

		cout << "Select£º" << endl;
		cin >> choice;
		switch (choice) {
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 0:
				SpeechManager::getInstance().exitSystem();
				break;
			default:
				system("cls");
				break;

		}
	}

	system("pause");
	return 0;
}