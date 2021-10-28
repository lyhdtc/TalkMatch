#pragma once
#include<iostream>
#include<fstream>
#include<vector>
#include<map>
#include<algorithm>
#include<deque>
#include<numeric>
#include<regex>
#include"speaker.h"

using namespace std;

class SpeechManager
{
public:
	//Singleton, just for practricing
	//static SpeechManager& getInstance() {
	//	static SpeechManager instance;
	//	return instance;
	//}
	SpeechManager() :round(1), v1{}, v2{}, vVectory{}, m_Speaker{} {this->create_Speaker(); };
	void show_Menu();

	void create_Speaker();

	void start_Speech();
	void speechDraw();
	void random_vector(vector<int>& V);

	void match();

	void showResult(vector<int>& V);


	void saveRecord();
	void loadRecord();

	//exit system
	void exitSystem();





	//1st round winner
	vector<int> v1;
	//2nd round winner
	vector<int> v2;
	//final winner
	vector<int> vVectory;

	//get Speaker info
	Speaker get_Speaker(int index);
	//add a speaker
	void add_m_Speaker(int index, Speaker speaker);
	//get current round
	int get_round();
	//round++
	void round_PP();
	map<int, Speaker> m_Speaker;
	virtual ~SpeechManager() {};

private:
	//SpeechManager() :round(1), v1{}, v2{}, vVectory{}, m_Speaker{} {this->create_Speaker(); };
	
	
	int round;
};

