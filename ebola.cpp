#include "ebola.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
//#include "util.cpp"

using namespace std;

/**
 * @brief
 * @param khanangmiendich
 * @param vaccin
 * Set 
 * @return
 */

Ebola::Ebola(string khanangmiendich, bool vaccin) : Virus(khanangmiendich,vaccin) {
	this->xacsuattrungbinh = 0.5;
	if (this->trieuchung == "Trieu chung nang") {
		this->thongtintrieuchung = "Non mua, tieu chay va xuat huyet ca ngoai lan ben trong";
	}
	else if (this->trieuchung == "Trieu chung nhe") {
		this->thongtintrieuchung = "Sot, dau hong, dau co va dau dau";
	}
	else {
		this->thongtintrieuchung = "Khong trieu chung";
	}
}

