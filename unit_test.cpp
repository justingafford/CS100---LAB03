#include "base.hpp"
#include "Op.hpp"
#include "Rand.hpp"
#include "Mult.hpp"
#include "Div.hpp"
#include "Add.hpp"
#include "Sub.hpp"
#include "Pow.hpp"
#include "gtest/gtest.h"

class OpMock: public Base {
    public:
        OpMock() { };

        virtual double evaluate() { return 7.5; }
        virtual string stringify() { return "7.5"; }
}

TEST(ArithTest, OpNumber)  {

OpMock* op1 = new OpMock(5.0); 
OpMock* op2 = new OpMock(7.0); 
OpMock* op3 = new OpMock(2.0); 

EXPECT_EQ(op1 -> evaluate(), 5.0);
EXPECT_EQ(op2 ->stringify(), “5.0”);

Add* add1 = new Add(op1, op2);
EXPECT_EQ(add12->evaluate(), 12);
EXPECT_EQ(add12->stringify(), “5+7”);

Sub* sub1 = new Sub(add1 , op2);
EXPECT_EQ(sub1->evaluate(), 5);
EXPECT_EQ(sub1->stringify(), “12-7”);

Mult* mult1 = new Mult(sub1 , op3);
EXPECT_EQ(mult1  ->evaluate(),  10);
EXPECT_EQ(mult1  ->stringify(), “5*2”);

Div* div1 = new Div(mult1  , op3);
EXPECT_EQ(div1  ->evaluate(),  5);
EXPECT_EQ(div1  ->stringify(), “10/2”);

Pow* pow1 = new Pow(div1, op3);
EXPECT_EQ(pow1  ->evaluate(),  25);
EXPECT_EQ(pow1  ->stringify(), “5**2”);
}

class RandMock: public Base {
    public:
        RandMock() { };

        virtual double evaluate() { return 7.5; }
        virtual string stringify() { return "7.5"; }
}

TEST(ArithTest, RandNumber)  {
RandMock* ra1 = new RandMock(5.0); 
RandMock* ra2 = new RandMock(7.0); 
RandMock* ra3 = new RandMock(2.0); 

EXPECT_EQ(ra1  -> evaluate(), 5.0);
EXPECT_EQ(ra2  ->stringify(), “5.0”);

Add* add1 = new Add(ra1 , ra2 );
EXPECT_EQ(add1 ->evaluate(), 12);
EXPECT_EQ(add1 ->stringify(), “5+7”);

Sub* sub1 = new Sub(add1 , ra2 );
EXPECT_EQ(sub1 ->evaluate(), 5);
EXPECT_EQ(sub1 ->stringify(), “12-7”);

Mult* mult1 = new Mult(sub1 , ra3 );
EXPECT_EQ(mult1 ->evaluate(),  10);
EXPECT_EQ(mult1 ->stringify(), “5*2”);

Div* div1 = new Div(mult1  , ra3 );
EXPECT_EQ(div1 ->evaluate(),  5);
EXPECT_EQ(div1 ->stringify(), “10/2”);

Pow* pow1 = new Pow(div1, ra3 );
EXPECT_EQ(pow1  ->evaluate(),  25);
EXPECT_EQ(pow1  ->stringify(), “5**2”);
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

