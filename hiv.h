#pragma once
#include <iostream>
#include "virus.h"
#include <ctime>
#include <cstdlib>

using namespace std;

class HIV : public Virus {
public:
	HIV(string khanangmiendich, bool vaccin);
};