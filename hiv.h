#pragma once
#include <iostream>
#include "virus.h"
#include <ctime>
#include <cstdlib>

using namespace std;

class HIV : public Virus {
public:
	// Khởi tạo virus HIV với khả năng miễn dịch và trạng thái tiêm vaccin
	HIV(string khanangmiendich, bool vaccin);
};