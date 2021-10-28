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
	match();
	cout << "--------------------------------------------" << endl;
	round_PP();

	//Drawing round2
	speechDraw();
	//Match round2
	match();
	cout << "--------------------------------------------" << endl;
	//Save result
	saveRecord();
}

void SpeechManager::speechDraw()
{
	for (int i = 0; i < 12; i++)
	{
		cout << v1[i] << endl;
	}

	cout << "Round" << this->round << " Drawing Result:" << endl;

	if (this->round == 1)
	{
		random_vector(this->v1);
	}
	else if (this->round == 2)
	{
		random_vector(this->v2);
	}
}

void SpeechManager::random_vector(vector<int>& V)
{
	random_shuffle(V.begin(), V.end());
	for (auto v : V)
	{
		cout << this->get_Speaker(v).Get_Name() << " ";
	}
	cout << endl;
}

void SpeechManager::match()
{
	
	cout << "Round" << this->round << " results: " << endl;
	
	vector<int> v_cur = this->round == 1 ? v1 : v2;
	vector<pair<int, double>> temp_result(v_cur.size());
	int pos = 0;
	deque<double> temp_score;
	pair<int, double> cur_result;

	//Score Players, and delete max/min score then calculate avg
	for (auto v : v_cur)
	{
		cur_result.first = v;
		for (int i = 0; i < 10; i++)
		{
			temp_score.push_back((rand() % 401 + 600) / 10.f);
		}
		sort(temp_score.begin(), temp_score.end());
		temp_score.pop_front();
		temp_score.pop_back();

		cur_result.second = accumulate(temp_score.begin(), temp_score.end(),0.0f)/8.f;
		temp_result[pos++] = cur_result;
		//get_Speaker(cur_result.first).Set_Score(cur_result.second,round);
		m_Speaker[cur_result.first].m_Score[round - 1] = cur_result.second;
	}	

	//Sort Result and update player info
	sort(temp_result.begin(), temp_result.end(), [](pair<int, double> a, pair<int, double> b) {return a.second > b.second; });
	for (auto &tr : temp_result)
	{
		cout << this->get_Speaker(tr.first).Get_Name() << ": " << tr.second << endl;
	}

	//Save Result into next-round-vector
	if (this->round == 1)
	{
		for (int i = 0; i < 6; ++i)
		{
			v2.emplace_back( temp_result[i].first);
		}
		this->showResult(v2);
	}
	else if (this->round == 2)
	{
		for (int i = 0; i < 3; ++i)
		{
			vVectory.emplace_back( temp_result[i].first);
		}
		this->showResult(vVectory);
	}


}

void SpeechManager::showResult(vector<int>& V)
{
	cout << "Winner this round is: ";
	for (auto v : V)
	{
		cout << this->get_Speaker(v).Get_Name() << " ";
	}
	cout << endl;
}

void SpeechManager::saveRecord()
{
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);
	for (auto v : vVectory)
	{
		ofs << this->get_Speaker(v).Get_Name() << "," << to_string(this->get_Speaker(v).Get_Score(2)) << ",";
	}
	ofs << endl;
	ofs.close();
	//v1 is initialized in speechManager(), so you can not clear this one(to avoid crash)
	//this->v1.clear();
	this->v2.clear();
	vVectory.clear();
	this->round = 1;
	cout << "Rcord Saved!" << endl;
	
}

void SpeechManager::loadRecord()
{
	ifstream ifs("speech.csv", ios::in);
	if (!ifs.is_open())
	{
		cout << "No Record!" << endl;
		return;
	}
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "No Record!" << endl;
		return;
	}
	ifs.putback(ch);

	string s;
	regex rec_reg("[A-Za-z0-9]+");
	std::smatch match;
	int index = 1;
	while (!ifs.eof())
	{
		ifs >> s;
		//cout << s << endl;
		if (regex_match(s, match, rec_reg))
		{
			cout << "Match" << index++ << ": ";
			for (auto m : match)
			{
				cout << " " << m;
			}

			cout << endl;
		}
	}
	ifs.close();

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