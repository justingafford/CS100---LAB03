#ifndef OP_HPP
#define OP_HPP
#include "base.hpp"
#include <string>
using namespace std;

class Op : public Base
{
    private:
        double num;
    public:
        Op() {num = 0; };
        Op(double n) {num = n;}
        double evaluate() {return num;}
        string stringify() {return to_string(num);}
};

#endif

