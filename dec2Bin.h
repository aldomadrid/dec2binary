#pragma once
#include <string>

using namespace std; 

class binConverter {
private:
	string binStr; 
	int dec; 
public: 
	string getBinStr(void); 
	void setDec(int _dec); 
};