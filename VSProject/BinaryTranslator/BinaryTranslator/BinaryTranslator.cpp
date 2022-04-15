#include "BinaryTranslator.h"
#include <iostream>
#include <sstream>

BinaryTranslator::BinaryTranslator() {}
BinaryTranslator::~BinaryTranslator() {}

string BinaryTranslator::BinaryToText(string binary) {
    
    // Trim white space
    binary.erase(remove_if(binary.begin(), binary.end(), isspace), binary.end());

    // Validate data
    if (binary.find_first_not_of("01") != string::npos) {
        return "Error: Not Binary";
    }

    if (binary.length() % 8 != 0) {
        return "Error: One or more bytes isn't split into 8 binary digits each.";
    }

    // Split the bytes up into a vector
    vector<string> bytes = {};
    while (binary != "") {
        string tmp = binary;
        tmp.resize(8);
        bytes.push_back(tmp);
        binary = binary.substr(8, binary.length() - 8);
    }

    // Translate each byte into its text counterpart
    string result = "";
    for (int i = 0; i < bytes.size(); i++) {
        if (bytes[i] == "01000001")
            result += "A";
        else if (bytes[i] == "01000010")
            result += "B";
        else if (bytes[i] == "01000011")
            result += "C";
        else if (bytes[i] == "01000100")
            result += "D";
        else if (bytes[i] == "01000101")
            result += "E";
        else if (bytes[i] == "01000110")
            result += "F";
        else if (bytes[i] == "01000111")
            result += "G";
        else if (bytes[i] == "01001000")
            result += "H";
        else if (bytes[i] == "01001001")
            result += "I";
        else if (bytes[i] == "01001010")
            result += "J";
        else if (bytes[i] == "01001011")
            result += "K";
        else if (bytes[i] == "01001100")
            result += "L";
        else if (bytes[i] == "01001101")
            result += "M";
        else if (bytes[i] == "01001110")
            result += "N";
        else if (bytes[i] == "01001111")
            result += "O";
        else if (bytes[i] == "01010000")
            result += "P";
        else if (bytes[i] == "01010001")
            result += "Q";
        else if (bytes[i] == "01010010")
            result += "R";
        else if (bytes[i] == "01010011")
            result += "S";
        else if (bytes[i] == "01010100")
            result += "T";
        else if (bytes[i] == "01010101")
            result += "U";
        else if (bytes[i] == "01010110")
            result += "V";
        else if (bytes[i] == "01010111")
            result += "W";
        else if (bytes[i] == "01011000")
            result += "X";
        else if (bytes[i] == "01011001")
            result += "Y";
        else if (bytes[i] == "01011010")
            result += "Z";
        else if (bytes[i] == "01100001")
            result += "a";
        else if (bytes[i] == "01100010")
            result += "b";
        else if (bytes[i] == "01100011")
            result += "c";
        else if (bytes[i] == "01100100")
            result += "d";
        else if (bytes[i] == "01100101")
            result += "e";
        else if (bytes[i] == "01100110")
            result += "f";
        else if (bytes[i] == "01100111")
            result += "g";
        else if (bytes[i] == "01101000")
            result += "h";
        else if (bytes[i] == "01101001")
            result += "i";
        else if (bytes[i] == "01101010")
            result += "j";
        else if (bytes[i] == "01101011")
            result += "k";
        else if (bytes[i] == "01101100")
            result += "l";
        else if (bytes[i] == "01101101")
            result += "m";
        else if (bytes[i] == "01101110")
            result += "n";
        else if (bytes[i] == "01101111")
            result += "o";
        else if (bytes[i] == "01110000")
            result += "p";
        else if (bytes[i] == "01110001")
            result += "q";
        else if (bytes[i] == "01110010")
            result += "r";
        else if (bytes[i] == "01110011")
            result += "s";
        else if (bytes[i] == "01110100")
            result += "t";
        else if (bytes[i] == "01110101")
            result += "u";
        else if (bytes[i] == "01110110")
            result += "v";
        else if (bytes[i] == "01110111")
            result += "w";
        else if (bytes[i] == "01111000")
            result += "x";
        else if (bytes[i] == "01111001")
            result += "y";
        else if (bytes[i] == "01111010")
            result += "z";
        else if (bytes[i] == "00100000")
            result += " ";
        else if (bytes[i] == "00100001")
            result += "!";
        else if (bytes[i] == "00100010")
            result += "\"";
        else if (bytes[i] == "00100111")
            result += "'";
        else if (bytes[i] == "00101100")
            result += ",";
        else if (bytes[i] == "00101101")
            result += "-";
        else if (bytes[i] == "00101110")
            result += ".";
        else if (bytes[i] == "00111010")
            result += ":";
        else if (bytes[i] == "00111011")
            result += ";";
        else if (bytes[i] == "00111111")
            result += "?";
    }
    return result;
}

string BinaryTranslator::TextToBinary(string english) {

    int sLength = english.length();

    for (int i = 0; i <= sLength; i++)
    {
        // convert each char to
        // ASCII value
        int val = int(english[i]);

        // Convert ASCII value to binary
        string bin = "";
        while (val > 0)
        {
            (val % 2) ? bin.push_back('1') :
                bin.push_back('0');
            val /= 2;
        }
        reverse(bin.begin(), bin.end());

        cout << bin;
    }

    return string();
}

string BinaryTranslator::TextToHex(string english) {
    stringstream input, result;
    int tmp = 0;

    for (const auto& item : english) {
        result << hex << int(item);
    }
    return result.str();
}

string BinaryTranslator::HexToText(string hexIn) {

    stringstream ss; 
    ss << hex << hexIn;
    return ss.str();
}
