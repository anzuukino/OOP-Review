#include "sarscov2.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
//#include "util.cpp"

using namespace std;

SarsCov2::SarsCov2(string khanangmiendich, bool vaccin): Virus(khanangmiendich, vaccin) {
	this->xacsuattrungbinh = 0.05;
	if (this->trieuchung == "Trieu chung nang") {
		this->thongtintrieuchung = "Sot cao, ho khan, kho tho va doi luc kem them dau dau du doi";
	}
	else if (this->trieuchung == "Trieu chung nhe") {
		this->thongtintrieuchung = "Sot, ho, mat vi giac trong vai ngay roi khoi";
	}
	else {
		this->thongtintrieuchung = "Khong trieu chung";
	}
}

