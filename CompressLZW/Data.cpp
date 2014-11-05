#include "stdafx.h"
#include "Data.h"
#include <iostream>
#include <fstream>

using namespace std;

CData::CData()
{
	this->readStream = new ifstream; 
	this->writeStream = new ofstream; 
}


CData::~CData()
{
	delete this->readStream;
	delete this->writeStream; 
}

ifstream& CData::OpenFileForRead(string& path)
{
	this->readStream->open(path, ifstream::in); 
	return *(this->readStream); 

}

ofstream& CData::OpenFileForWrite(string& path)
{
	this->writeStream->open(path, ofstream::out);
	return *(this->writeStream); 
}

int CData::Write()
{
	writeStream->flush(); 
	return 0; 
}