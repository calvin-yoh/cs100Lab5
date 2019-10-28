#ifndef __BASE_HPP__
#define __BASE_HPP__

#include <string>

class Base {
    public:
        /* Constructors */
        Base() 
	{
		left = NULL;
		right = NULL;
	};
	Base* left;
	Base* right; 
	
        /* Pure Virtual Functions */
        virtual double evaluate() = 0;
        virtual std::string stringify() = 0;
};

#endif //__BASE_HPP__
