#include "base.hpp"
#include <string.h>


double Base::evaluate()
{
	return this->value;

}

string Base::stringify()
{
	string s = (string)this->value; 
	return s;
}
