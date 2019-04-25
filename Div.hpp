#ifndef DIV_HPP
#define DIV_HPP
#include "base.cpp"
class Div: public Base
{
  private:
	Base* L1;
	Base* L2;
  public:
	Div(Base*, Base*);
	double evaluate();
	string stringify();
};
#endif

