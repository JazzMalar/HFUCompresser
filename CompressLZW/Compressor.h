#pragma once
#include <iostream>

using namespace std; 

class CCompressor
{
public:

	virtual int Compress(istream& input, ostream& output, string key) = 0; 
	virtual int Decompress(istream& input, ostream& output, string key) = 0;

	CCompressor();
	~CCompressor();
};

