#pragma once

#include <iostream>

using namespace std; 

class CUserInterface
{
private: 
	string inputPath; 

public:

	void AskForInput(); 

	CUserInterface();
	~CUserInterface();
};

