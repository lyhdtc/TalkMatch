#include"speechManager.h"

void SpeechManager::show_Menu()
{
	cout << "*******************************" << endl;
	cout << "********��ӭ�μ��ݽ�����*******" << endl;
	cout << "*********1.��ʼ�ݽ�����********" << endl;
	cout << "*********2.�鿴�����¼********" << endl;
	cout << "*********3.��ձ�����¼********" << endl;
	cout << "*********0.�˳���������********" << endl;
	cout << "*******************************" << endl;
}

void SpeechManager::exitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

Speaker SpeechManager::get_Speaker(int index)
{
	return SpeechManager::m_Speaker[index];
}

void SpeechManager::add_m_Speaker(int index, Speaker speaker)
{
	SpeechManager::m_Speaker[index] = speaker;
	return;
}

int SpeechManager::get_round()
{
	return SpeechManager::round;
}

void SpeechManager::round_PP()
{
	SpeechManager::round ++;
	return;
}