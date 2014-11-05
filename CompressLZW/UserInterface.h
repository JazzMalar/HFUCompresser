#pragma once

#include <iostream>
#include "Control.h"

using namespace std; 

class CUserInterface
{
private: 
	string inputPath; 
	CControl *controller; 
public:

	void AskForInput(); 

	CUserInterface();
	~CUserInterface();
};

