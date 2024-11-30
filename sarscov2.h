#pragma once
#include <iostream>
#include "virus.h"
#include <ctime>
#include <cstdlib>

using namespace std;

class SarsCov2 : public Virus {
public:
	SarsCov2(string khanangmiendich, bool vaccin);
};