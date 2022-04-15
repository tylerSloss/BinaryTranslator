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

	cout << "Text to Hexadecimal: Enter Text" << endl;
	string txt;
	getline(cin, txt);
	cout << trans.TextToHex(txt) << endl;

	return 0;
}