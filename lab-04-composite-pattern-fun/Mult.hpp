#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"

class Mult : public Base {
    public:
        Mult(Base* value1,Base* value2) : Base() { }
        virtual double evaluate() { return value1->evaluate()*value2->evaluate();}
        virtual std::string stringify()
 	{
 		return value1->stringify() + " * " + value2->stringify(); 
 	};

#endif //__MULT_HPP__
~                       
