#include "stdafx.h"
#include "Control.h"
#include "LZW.h"
#include <iostream>
#include <fstream>

CControl::CControl()
{
	this->Algo = new CLZW; 
	this->Data = new CData; 
}

int CControl::Compress(string& path)
{
	ifstream *input = &(Data->OpenFileForRead(path)); 
	ofstream *output = &(Data->OpenFileForWrite(path + ".jazz")); 

	this->Algo->Compress(*(input), *(output),"");

	this->Data->Write(); 

	return 0;

}

CControl::~CControl()
{
}
