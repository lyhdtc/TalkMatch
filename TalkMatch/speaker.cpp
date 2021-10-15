#include"speaker.h"
using namespace std;


Speaker::~Speaker()
{

}

string Speaker::Get_Name()
{
	return Speaker::m_name;
}

void Speaker::Set_name(string name)
{
	Speaker::m_name = name;
	return;
}

float Speaker::Get_Score(int round)
{
	return Speaker::m_Score[round];
}

void Speaker::Set_Score(float score, int round)
{
	Speaker::m_Score[round] = score;
	return;
}