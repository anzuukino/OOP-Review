#pragma once
#include <iostream>
#include "virus.h"
#include <ctime>
#include <cstdlib>

using namespace std;

class Ebola : public Virus {
public:
	// Khởi tạo virus Ebola với khả năng miễn dịch và trạng thái tiêm vaccin
	Ebola(string khanangmiendich, bool vaccin);
};