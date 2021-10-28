#include<iostream>
using namespace std;
#include"speechManager.h"
#include "Main.h"

int main() {
	
	int choice = 0;
	//Speaker sp("asdf");
	//cout << sp.Get_Name() << endl;
	//for (int i = 10001; i < 10013; i++)
	//{
	//	cout << SMR.get_Speaker(i).Get_Name() << endl;
	//}
	SpeechManager SMR;
	while (true) {
		SMR.show_Menu();
		//for (int i = 10001; i < 10013; i++)
		//{
		//	cout << SMR.get_Speaker(i).m_name << endl;
		//}




		cout << "Select£º" << endl;
		cin >> choice;
		switch (choice) {
			case 1:
				SMR.start_Speech();
				break;
			case 2:		
				SMR.loadRecord();
				break;
			case 3:
				break;
			case 0:
				SMR.exitSystem();
				break;
			default:
				system("cls");
				break;

		}
	}

	system("pause");
	return 0;
}