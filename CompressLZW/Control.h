#pragma once
#include "Compressor.h"
#include "Data.h"
class CControl
{

private:
	CCompressor *Algo;
	CData *Data; 

public:
	CControl();
	~CControl();

	int Compress(string& path); 

};

