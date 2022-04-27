#include "random.h"


double getProb() {
	std::random_device rd;
	std::seed_seq ss{ rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd() };
	std::mt19937 mt{ ss };
	std::uniform_real_distribution<double> _dist{ 0.0,1.0 };

	return _dist(mt);
}