#include <iostream>
#include <ctime>
#include <cstdlib>
#include "util.h"

using namespace std;


double bangxacsuat[3][4] = {
	{0.5, 0.35, 0.15, 0.5},
	{0.1, 0.4, 0.5, 0.7},
	{0.05, 0.15, 0.8, 1}
};

double bangxacsuat2[3][4] = {
	{0.7, 0.25, 0.05, 0.4},
	{0.2, 0.5, 0.3, 0.6},
	{0.1, 0.4, 0.5, 0.8}
};

double RandomDouble() {
	return (rand() % 101) / 100.0;
}