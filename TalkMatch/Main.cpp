#include<iostream>
using namespace std;
#include"speechManager.h"

int main() {
	
	int choice = 0;
	//Speaker sp("asdf");
	//cout << sp.Get_Name() << endl;
	for (int i = 10001; i < 10013; i++)
	{
		cout << SpeechManager::getInstance().get_Speaker(i).Get_Name() << endl;
	}

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