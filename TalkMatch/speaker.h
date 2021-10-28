#pragma once
#include<iostream>

using namespace std;

class Speaker
{
public:
	Speaker() :m_name("nobody"), m_Score{0,0} {};
	Speaker(string s) :m_name(s), m_Score{ 0,0 }{};
	
	void Set_name(string name);
	void Set_Score(double score, int round);
	string Get_Name();
	double Get_Score(int round);

	string m_name;
	double m_Score[2];

	~Speaker();
private:

};

