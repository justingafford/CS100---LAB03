#include "Pow.hpp"
#include <string>
using namespace std;
	Pow::Pow(Base* l1, Base* l2): L1(l1), L2(l2) {}
	double Pow::evaluate() {
		return pow(L1 -> evaluate() , L2 -> evaluate());
	}
	string Mult::stringify() {
		return to_string(pow(L1 -> evaluate() , L2 -> evaluate()));
	}

      #endif
