#include "vatchu.h"
#include <iostream>
#include <string> 

using namespace std;

int main() {
	srand(time(0));
	int n;
	cout << "Nhap so luong vat chu: ";
	cin >> n;
	vector <Vatchu*> vatchu;
	int soluongtuvong = 0;
	string khanangmiendich[3] = { "Cao", "Trung Binh", "Thap" };
	for (int i = 0; i < n; i++) {
		int khanangmiendichdangso;
		cout << "Nhap kha nang mien dich cua " << "BN" + to_string(i+1) << " (1: Cao, 2: Trung Binh, 3: Thap): ";
		cin >> khanangmiendichdangso;
		if (khanangmiendichdangso < 1 || khanangmiendichdangso > 3) {
			cout << "Nhap lai kha nang mien dich" << endl;
			i--;
			continue;
		}
		vatchu.push_back(new Vatchu("BN" + to_string(i), 0, khanangmiendich[khanangmiendichdangso - 1]));
	}

	for (int i = 0; i < n; i++) {
		vatchu[i]->InThongTinVatChu();
		if (vatchu[i]->TuVong()) {
			soluongtuvong++;
		}
	}
	cout << "------------Thong tin------------" << endl;
	cout << "So luong vat chu tu vong (chua tiem vaccin): " << soluongtuvong << endl;
	

	int m;
	m = n;
	cout << "---------------------------------" << endl;
	cout << "Vat chu duoc tiem vaccin!" << endl;
	vector <Vatchu*> vatchu2;
	for (int i = 0; i < m; i++) {
		int khanangmiendichdangso;
		cout << "Nhap kha nang mien dich cua " << "BN" + to_string(i+1) << " (1: Cao, 2: Trung Binh, 3: Thap): ";
		cin >> khanangmiendichdangso;
		if (khanangmiendichdangso < 1 || khanangmiendichdangso > 3) {
			cout << "Nhap lai kha nang mien dich" << endl;
			i--;
			continue;
		}
		vatchu2.push_back(new Vatchu("BN" + to_string(i), 1, khanangmiendich[khanangmiendichdangso - 1]));
	}
	int soluongtrieuchungnang = 0, soluongvatchutuvong = 0;
	for (int i = 0; i < m; i++) {
		vector <string> trieuchung = vatchu2[i]->TrieuChung();
		for (int j = 0; j < trieuchung.size(); j++) {
			if (trieuchung[j] == "Trieu chung nang") {
				soluongtrieuchungnang++;
				break;
			}
		}
		if (vatchu2[i]->TuVong()) {
			soluongvatchutuvong++;
		}
	}
	cout << "------------Thong tin------------" << endl;
	cout << "So luong vat chu co trieu chung nang (da tiem vaccin): " << soluongtrieuchungnang << endl;
	cout << "So luong vat chu tu vong (da tiem vaccin): " << soluongvatchutuvong << endl;
	cout << "---------------------------------" << endl;
}