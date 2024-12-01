#include "vatchu.h"
#include <iostream>
#include "util.h"
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

Vatchu::Vatchu(string maso, bool vaccin, string khanangmiendich) {
	this->xacsuattuvong = 0;
	this->maso = maso;
	this->vaccin = vaccin;
	this->khanangmiendich = khanangmiendich;
	this->virus.push_back(new SarsCov2(this->khanangmiendich, this->vaccin));
	this->virus.push_back(new HIV(this->khanangmiendich, this->vaccin));
	this->virus.push_back(new Ebola(this->khanangmiendich, this->vaccin));
	for (int i = 0; i < this->virus.size(); i++) {
		this->trieuchung.push_back(this->virus[i]->TrieuChung());
	}

	
	for (int i = 0; i < 3; i++){
		double random2 = RandomDouble();
		double xacsuat = this->virus[i]->TinhXacSuatTuVong();
		if (random2 <= xacsuat) {
			this->tuvong = true;
			break;
		}else {
			this->tuvong = false;
		}
	}

	
}

void Vatchu::InThongTinVatChu() {
	cout << "------------Thong tin------------" << endl;
	cout << "Ma so benh nhan: " << this->maso << endl;
	cout << "Kha nang mien dich: " << this->khanangmiendich << endl;
	cout << "------------Trieu chung------------" << endl;
	for (int i = 0; i < 3; i++) {
		this->virus[i]->InThongTin();
	}
	if (this->tuvong) {
		cout << "Tu vong" << endl;
	}
	else {
		cout << "Khong tu vong" << endl;
	}

	cout << "---------------------------------" << endl;

}

vector<string> Vatchu::TrieuChung() {
	return this->trieuchung;
}

bool Vatchu::TuVong() {
	return this->tuvong;
}

Vatchu::~Vatchu() {
	for (int i = 0; i < this->virus.size(); i++) {
		delete this->virus[i];
	}
}