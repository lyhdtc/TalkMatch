#include"speaker.h"
using namespace std;


Speaker::~Speaker()
{
	//printf("nooooo\n");
}

string Speaker::Get_Name()
{
	return this->m_name;
}

void Speaker::Set_name(string name)
{
	this->m_name = name;
	return;
}

double Speaker::Get_Score(int round)
{
	//cout << round <<" "<< Speaker::m_Score[1]<<endl;	
	return Speaker::m_Score[--round];
}

void Speaker::Set_Score(double score, int round)
{
	this->m_Score[--round] = score;
	//cout << round << " " << Speaker::m_Score[round] << endl;
	return;
}