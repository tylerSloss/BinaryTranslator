#include <math.h>
#include <string>
#include <iostream>
#include "BinaryTranslator.h"

using namespace std;

int main() {

	BinaryTranslator trans;

	cout << "Binary to English: Enter Binary" << endl;
	string bin;
	getline(cin, bin);
	cout << trans.BinaryToText(bin) << endl;

	cout << "English to Binary: Enter English" << endl;
	string eng;
	getline(cin, eng);
	cout << trans.TextToBinary(eng) << endl;

	cout << "Text to Hexadecimal: Enter Text" << endl;
	string txt;
	getline(cin, txt);
	cout << trans.TextToHex(txt) << endl;

	cout << "Hexadecimal to Text: Enter Hex" << endl;
	string hx;
	getline(cin, hx);
	cout << trans.HexToText(txt) << endl;



	return 0;
}