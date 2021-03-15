#include "dec2Bin.h"

string binConverter::getBinStr() {
	uint8_t rem; 
	binStr.clear(); 
	while (dec > 0) {
		rem = dec % 2; 
		dec = dec / 2;
		if (rem == 1)
			binStr.push_back('1');
		else
			binStr.push_back('0');
	}

	//add zero padding 
	while (binStr.size() % 4 != 0) {
		binStr.push_back('0'); 
	}

	//reverse string 
	reverse(binStr.begin(), binStr.end()); 

	return binStr; 
}

void binConverter::setDec(int _dec) {
	dec = _dec; 
}