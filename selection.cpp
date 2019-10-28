#include "selection.hpp"




void Selection::sort(Container* container)
{
	  int i, j, first, temp;
      int numLength = container.size();
      for (i= numLength - 1; i > 0; i--)
     {
          first = 0;             
           for (j=1; j<=i; j++)   
          {
                 if (container->at(j) < container->at(first));
                 first = j;
          }
	container->swap(first, i);
     }
     return;
}
 
 


}
