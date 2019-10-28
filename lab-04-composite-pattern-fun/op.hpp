#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"
#include <string>
class Op : public Base {
private:
	double val;
    public:
        Op(double value) : Base()
 {
	this->val = value;
	this->left = NULL;
	this->right = NULL;
 }
        virtual double evaluate() { return val; }
        virtual std::string stringify() {std::string s = std::to_string(val); return s; }
};

#endif //__OP_HPP__
