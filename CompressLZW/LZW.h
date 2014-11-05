#pragma once
#include "Compressor.h"
#include <map>

using namespace std; 

class CLZW :
	public CCompressor
{

private:
	map<string, int> codes; 

public:
	CLZW();
	~CLZW();

	int Compress(istream& input, ostream& output, string key) override;
	int Decompress(istream& input, ostream& output, string key) override;

};

