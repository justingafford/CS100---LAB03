#ifndef POW_HPP
#define POW_HPP
#include "base.hpp"
class Pow: public Base
{
 private:
	Base* L1;
	Base* L2;   
public:
            Pow(Base*, Base*);
	double evaluate();
	string stringify();
       };
 #endif

