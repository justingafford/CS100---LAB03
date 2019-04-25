#ifndef ADD_HPP
#define ADD_HPP
#include "base.hpp"
class Add: public Base
{
  private:
	Base* L1;
	Base* L2;
  public:
	Add(Base*, Base*);
	double evaluate();
	string stringify();
};
#endif

