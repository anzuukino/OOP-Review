#include "hiv.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
//#include "util.cpp"

using namespace std;

HIV::HIV(string khanangmiendich, bool vaccin) : Virus(khanangmiendich, vaccin) {
	this->xacsuattrungbinh = 0.9;
	if (this->trieuchung == "Trieu chung nang") {
		this->thongtintrieuchung = "Met moi cuc do khong giai thich duoc, sung hach keo dai, lo loet, viem phoi, tieu chay nang va sau do la tu vong";
	}
	else if (this->trieuchung == "Trieu chung nhe") {
		this->thongtintrieuchung = "Gay cam sot trong thoi gian u benh (3 - 5 nam)";
	}
	else {
		this->thongtintrieuchung = "Khong trieu chung";
	}
}

