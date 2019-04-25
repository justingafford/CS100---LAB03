#include "rand.hpp"
#include <string>
using namespace std;

class Rand () : public Base
{
    
    public:
        Rand() {num = rand() % 100;};
        double evaluate() {return num;}
        string stringify() {return to_string(num);}
};

