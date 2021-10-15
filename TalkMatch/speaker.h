#pragma once
#include<iostream>

using namespace std;

class Speaker
{
public:
	Speaker() :m_name("nobody"), m_Score{0,0} {};
	Speaker(string s) :m_name(s), m_Score{ 0,0 }{};
	
	void Set_name(string name);
	void Set_Score(float score, int round);
	string Get_Name();
	float Get_Score(int round);



	~Speaker();
private:
	string m_name;
	float m_Score[2];
};

