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

void SpeechManager::start_Speech()
{
	//Drawing round1
	speechDraw();
	//Match round1

	//Result round1

	//Drawing round2

	//Match round2

	//Result round2

	//Save result
}



void random_vector(vector<int>& V)
{
	random_shuffle(V.begin(), V.end());
	for (auto v : V)
	{
		cout << v << " ";
	}
	cout << endl;

}

void SpeechManager::speechDraw()
{
	cout << "Round" << this->round << " Drawing" << endl;
	cout << "-----------------------" << endl;
	cout << "Result:" << endl;

	if (this->round == 1)
	{
		random_vector(this->v1);
	}
	else if (this->round == 2)
	{
		random_vector(this->v2);
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