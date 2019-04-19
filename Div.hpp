#include "base.hpp"

class Div: public Base {
  public:
	Div { };
	string Div (Base* L1, Base* L2) {
		Base();
		left = L1;
		right = L2;
		return (L1 -> data) / (L2 -> data);
};
