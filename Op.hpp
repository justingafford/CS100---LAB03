#ifndef OP_HPP
#define OP_HPP
#include "base.hpp"
class Op : public Base
{
    private:
        double num;
    public:
        Op();
        Op(double n);
        double evaluate();
        string stringify(); 
};

#endif

