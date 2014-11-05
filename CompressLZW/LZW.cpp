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
	char c = 'a';
	while (input.good())
	{
		c = input.get();
		output << c; 
	}

	return 1; 

}

int CLZW::Decompress(istream& input, ostream& output, string key)
{
	throw std::logic_error("The method or operation is not implemented.");
}
