#pragma once
#include <iostream>

using namespace std;

class CData
{
private:
	ofstream *writeStream; 
	ifstream *readStream; 

public:

	ofstream& OpenFileForWrite(string& path); 
	ifstream& OpenFileForRead(string& path);
	int Write(); 


	CData();
	~CData();
};

