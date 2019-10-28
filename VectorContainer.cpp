#include "VectorContainer.hpp"

void VectorContainer::add_element(Base*element)
{
	this->vect.push_back(element);
	length++;
}

void VectorContainer::print()
{
	for(int i = 0; i < this->length; i++)
	{
		this->vect.at(i)->stringify();	
	}	
}

void VectorContainer::sort()
{
	try{
		if(sort_function == null)
		{
			throw 0;
		}
		sort_function.sort(*this);
	}		
	catch(int 0){
		cout << "Sort_function was null";	
	}	
}

void VectorContainer::swap(int i, int j)
{
	Base* temp = this->vect.at(i);
	this->vect.at(i) = this->vect.at(j);
	this->vect.at(j) = temp;	
}

Base* VectorContainer::at(int i)
{
	return this->vect.at(i);

}

int VectorContainer::size()
{
	return length;
}

