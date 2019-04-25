#ifndef RAND_HPP
#define RAND_HPP
#include "base.hpp"
#include <string>
using namespace std;

class Rand : public Base
{
    private:
        double num;
    public:
        Rand() {num = rand() % 100;};
        double evaluate() {return num;}
        string stringify() {return to_string(num);}
};

#endif

