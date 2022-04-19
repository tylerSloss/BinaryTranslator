#include <math.h>
#include <string>
#include <iostream>
#include "BinaryTranslator.h"

using namespace std;

int main() {

	BinaryTranslator trans;
	string txt, bin, hx;

	cout << "Binary to Text: Enter Binary" << endl;
	getline(cin, bin);
	cout << trans.BinaryToText(bin) << endl;

	cout << "Text to Binary: Enter Text" << endl;
	getline(cin, txt);
	cout << trans.TextToBinary(txt) << endl;

	cout << "Text to Hexadecimal: Enter Text" << endl;
	getline(cin, txt);
	cout << trans.TextToHex(txt) << endl;

	cout << "Hexadecimal to Text: Enter Hex" << endl;
	getline(cin, hx);
	cout << trans.HexToText(txt) << endl;

	return 0;
}
