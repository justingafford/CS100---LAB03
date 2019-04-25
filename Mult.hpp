#ifndef MULT_HPP
#define MULT_HPP
#include "base.hpp"
class Mult : public Base
{
 private:
	Base* L1;
	Base* L2;      
public:
            Mult(Base*, Base*);
	double evaluate();
	string stringify();
       };
 #endif

