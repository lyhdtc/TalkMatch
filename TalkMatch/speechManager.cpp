#include"speechManager.h"

void SpeechManager::show_Menu()
{
	cout << "*******************************" << endl;
	cout << "********欢迎参加演讲比赛*******" << endl;
	cout << "*********1.开始演讲比赛********" << endl;
	cout << "*********2.查看往届记录********" << endl;
	cout << "*********3.清空比赛记录********" << endl;
	cout << "*********0.退出比赛程序********" << endl;
	cout << "*******************************" << endl;
}

void SpeechManager::exitSystem()
{
	cout << "欢迎下次使用" << endl;
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