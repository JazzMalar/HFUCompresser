#include "stdafx.h"
#include "LZW.h"


CLZW::CLZW()
{
}


CLZW::~CLZW()
{
}

int CLZW::Compress(istream& input, ostream& output, string key)
{
	char c; 
	while (input.get() >> c)
	{
		cout << c << endl; 
	}
}

int CLZW::Decompress(istream& input, ostream& output, string key)
{
	throw std::logic_error("The method or operation is not implemented.");
}
