#pragma once
#include <iostream>
#include "hiv.h"
#include "ebola.h"
#include "sarscov2.h"
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

class Vatchu {
private:
	Virus* virus[3];
	string maso;
	double xacsuattuvong;
	bool vaccin;
	string khanangmiendich;
	bool tuvong;
	vector<string> trieuchung;
public:
	Vatchu(string maso, bool vaccin);
	~Vatchu();
	void InThongTinVatChu();
	vector<string> TrieuChung();
	bool TuVong();
};