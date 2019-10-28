#ifndef __LISTCONTAINER__
#define __LISTCONTAINER__

#include <list>
#include <iostream>

class ListContainer : Container{
   private:
      list<Base*> newList;
      

   public:
      void add_element(Base* element);
      void print();
      void sort();
      void swap(int i, int j);
      Base* at(int i);
      int size();
}
#endif
