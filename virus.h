#pragma once
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class Virus {
protected:
	string trieuchung; // triệu chứng
	double xacsuattuvong; // xác suất tử vong
	double xacsuattrungbinh; // xác suất trung bình
	string khanangmiendich; // khả năng miễn dịch
	string thongtintrieuchung; // thông tin triệu chứng
	bool vaccin; // đã tiêm vaccin hay chưa
public:
	// Khởi tạo virus với khả năng miễn dịch và trạng thái tiêm vaccin
	Virus(string khanangmiendich, bool vaccin);
	// Set khả năng miễn dịch
	void SetMienDich(int i);
	// In thông tin triệu chứng của virus
	void InThongTin();
	// Tính xác suất tử vong
	double TinhXacSuatTuVong();
	// Trả về triệu chứng
	string TrieuChung();
};