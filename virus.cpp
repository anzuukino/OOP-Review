#include "virus.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "util.h"

using namespace std;

Virus::Virus(string khanangmiendich, bool vaccin) {
	this->vaccin = vaccin;
	this->khanangmiendich = khanangmiendich;
	if (khanangmiendich == "Cao") {
		SetMienDich(1);
	}
	else if (khanangmiendich == "Trung Binh") {
		SetMienDich(2);
	}
	else {
		SetMienDich(3);
	}
}

void Virus::SetMienDich(int i) {
	double random = RandomDouble();
	double bang[3][4];
	for (int k = 0; k < 3; k++) {
		for (int j = 0; j < 4; j++) {
			if (vaccin)
				bang[k][j] = bangxacsuat2[k][j];
			else
				bang[k][j] = bangxacsuat[k][j];
		}
	}
	if (random <= bang[i - 1][0]) {
		trieuchung = "Khong trieu chung";
		xacsuattuvong = bang[i - 1][3];
	}
	else if (random <= bang[i - 1][1]) {
		trieuchung = "Trieu chung nhe";
		xacsuattuvong = bang[i - 1][3];
	}
	else {
		trieuchung = "Trieu chung nang";
		xacsuattuvong = bang[i - 1][3];
	}
}

string Virus::TrieuChung() {
	return this->trieuchung;
}

void Virus::InThongTin() {
	if (this->trieuchung != "Khong trieu chung")
		cout << this->thongtintrieuchung << endl;
}

double Virus::TinhXacSuatTuVong() {
	return this->xacsuattuvong * this->xacsuattrungbinh;
}

