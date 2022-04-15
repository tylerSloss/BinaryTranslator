#pragma once
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <sstream>


using namespace std;

class BinaryTranslator
{
public:
	BinaryTranslator();
	~BinaryTranslator();
	string BinaryToText(string binary);
	string TextToBinary(string english);
	string TextToHex(string english);
	string HexToText(string hex);
};


