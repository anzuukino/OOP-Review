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
	vector <Virus*> virus; // vector chứa các loại virus
	string maso; // mã số của vật chủ
	double xacsuattuvong; // xác suất tử vong
	bool vaccin; // đã tiêm vaccin hay chưa
	string khanangmiendich; // khả năng miễn dịch
	bool tuvong; // tử vong hay không
	vector<string> trieuchung; // vector chứa triệu chứng
public:
	// Khởi tạo vât chủ với mã số, trạng thái tiêm vaccin và khả năng miễn dịch
	Vatchu(string maso, bool vaccin, string khanangmiendich);
	// Hủy vật chủ
	~Vatchu();
	// In thông tin vật chủ
	void InThongTinVatChu();
	// Trả về vector chứa triệu chứng
	vector<string> TrieuChung();
	// Trả về true nếu vật chủ tử vong, ngược lại trả về false
	bool TuVong();
};