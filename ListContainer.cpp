#include "ListContainer.hpp"
      
void ListContainer::add_element(Base* element){
   this->newList.assign(element);
    
}

void ListContainer::print(){
  list<Base*>::iterator it = newList.begin();
  for(it; it != newList.end(); it++){
      cout << *it->stringify();
   }
}

void ListContainer::sort(){
   try{
      if(sort_function == null){
         throw 0;
      }
      sort_function.sort(*this);
      
      
   }
   catch(int 0){
      cout << "Sort_function was null";
   }   
}

void ListContainer::swap(int i, int j){
   list<Base*>::iterator it = newList.begin();
   advance(it, i);
   Base* tmp = *it;
   list<Base*>::iterator il = newList.begin();
   advance(il, j);
   *it = *il;
   *il = tmp; 
}
Base* ListContainer::Base* at(int i){
   list<Base*>::iterator it = newList.begin();
   advance(it, i); 
}

int ListContainer::size(){
   newList.size();
}

