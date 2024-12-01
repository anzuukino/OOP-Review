#pragma once
#include <iostream>
#include "virus.h"
#include <ctime>
#include <cstdlib>

using namespace std;

class SarsCov2 : public Virus {
public:
	// Khởi tạo virus SarsCov2 với khả năng miễn dịch và trạng thái tiêm vaccin
	SarsCov2(string khanangmiendich, bool vaccin);
};