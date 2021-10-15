#include"speechManager.h"

void SpeechManager::show_Menu()
{
	cout << "*******************************" << endl;
	cout << "******      Welcome     *******" << endl;
	cout << "******   1.Start        *******" << endl;
	cout << "******   2.Record       *******" << endl;
	cout << "******   3.Clear Record *******" << endl;
	cout << "******   0.Exit         *******" << endl;
	cout << "*******************************" << endl;
}

void SpeechManager::create_Speaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (auto n : nameSeed)
	{
		string temp = "player";
		temp += n;
		Speaker sp(temp);
		this->v1.emplace_back(n - 'A' + 10001);
		this->add_m_Speaker(n - 'A' + 10001, sp);
		
	}
}


void SpeechManager::exitSystem()
{
	cout << "Thanks!" << endl;
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