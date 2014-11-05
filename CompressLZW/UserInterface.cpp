#include "stdafx.h"
#include "UserInterface.h"
#include <string>
#include <sstream>

using namespace std; 

CUserInterface::CUserInterface()
{
	this->inputPath = ""; 
	this->controller = new CControl; 

}

CUserInterface::~CUserInterface()
{
	delete controller; 
}


void CUserInterface::AskForInput()
{
	cout << "Filepfad angeben:" << endl; 
	getline(cin, this->inputPath); 

	controller->Compress(this->inputPath);

}