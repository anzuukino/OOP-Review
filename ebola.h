#pragma once
#include <iostream>
#include "virus.h"
#include <ctime>
#include <cstdlib>

using namespace std;

class Ebola : public Virus {
public:
	Ebola(string khanangmiendich, bool vaccin);
};