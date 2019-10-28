#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"

class Div : public Base {
    public:
        Div(Base* value1,Base* value2) : Base() 
	{
        this->left = value1;
	this->right = value2; 
        }
        virtual double evaluate() { return this->left->evaluate() / this->right->evaluate();}
        virtual std::string stringify()
        {
                return value1->stringify() + " / " + value2->stringify();
        };
};
#endif //__DIV_HPP__
~
