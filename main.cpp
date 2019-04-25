#include <iostream>
#include <ctime>
#include <cstdlib>
#include "base.hpp"
#include "Op.hpp"
#include "Rand.hpp"
#include "Mult.hpp"
#include "Div.hpp"
#include "Add.hpp"
#include "Sub.hpp"
#include "Pow.hpp"
using namespace std;

int main() { 
	Op* num1 = new Op(7)
	Op* num2 = new Op(6)
	Op* num3 = new Op(2)
	Op* num4 = new Op(9)

	Mult* op1 = new Mult(num1,num2);
	cout << "Seven times six is: " << op1 -> evaluate() << endl;

	Div* op2 = new Div(num 2,num3);
	cout << "Six divided by two is: " << op2 -> evaluate() << endl;

	Add* op3 = new Add(num3,num4);
	cout << "Two plus nine is:  " << op3 -> evaluate() << endl;

	Sub* op4  = new Sub(num 1, num3);
	cout << "Seven minus two is: " << op4 -> evaluate() << endl;

	Pow* op5 = new Pow(num4, num3);
	cout << "Nine to the power of two is: " << op5 -> evaluate()  << endl;

	//test random numbers
	srand(time(0));
	Rand* rand1 = new Rand();
	Rand* rand2 = new Rand();
	cout << "The two random numbers are: " << rand1 -> evaluate() << " and " << rand2->evaluate() << endl;
	Mult* randMult = new Mult(rand1,rand2);
	cout << "If you multiply the random numbers, the result is: " << randMult -> evaluate() << endl;

	cout << "The expression tree of 4 * (6+9) / 2 ";
	Op* num5 = new Op(6);
	Op* num6 = new Op(9);
	Op* num7 = new Op(4);
	Op* num8 = new Op(2);

	Add* op6 = new Add(num5,num6);
	Mult* op7 = new Mult(op6, num7);
	Div* answer = new Div(op7, num8);
	cout << "evaluates to " << answer->evaluate() << endl;
	return 0;
}
