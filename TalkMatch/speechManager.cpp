#include"speechManager.h"


SpeechManager::SpeechManager()
{
}

SpeechManager::~SpeechManager()
{
}

void SpeechManager::show_Menu()
{
	cout << "*******************************" << endl;
	cout << "********��ӭ�μ��ݽ�����*******" << endl;
	cout << "*********1.��ʼ�ݽ�����********" << endl;
	cout << "*********2.�鿴�����¼********" << endl;
	cout << "*********3.��ձ�����¼********" << endl;
	cout << "*********4.�˳���������********" << endl;
	cout << "*******************************" << endl;
}

void SpeechManager::exitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}