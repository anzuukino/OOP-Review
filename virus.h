#pragma once
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class Virus {
protected:
	string trieuchung;
	double xacsuattuvong;
	double xacsuattrungbinh;
	string khanangmiendich;
	string thongtintrieuchung;
	bool vaccin;
public:
	Virus(string khanangmiendich, bool vaccin);
	void SetMienDich(int i);
	void InThongTin();
	double TinhXacXuatTuVong();
	string TrieuChung();
};