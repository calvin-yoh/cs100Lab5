#ifndef __VECTORCONTAINER__
#define __VECTORCONTAINER__

#include "sort.hpp"
#include "base.hpp"
#include <string>
#include <vector>

using namespace std;
class VectorContainer : Container {
public:
		int length = 0;
		vector<Base*> vect;

		void add_element(Base*element);
		void print();
		void sort();
		void swap(int i, int j);
		Base* at(int i) = 0;
		int size();

#endif
