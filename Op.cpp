#include "op.hpp"
#include <string>
using namespace std;
class Op () : public Base
{

    public:
        Op() {num = 0; };
        Op(double  n) {num = n;}
        double evaluate() {return num;}
        string stringify() {return to_string(num);}
};

