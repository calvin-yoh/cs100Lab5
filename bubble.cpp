#include "BubbleSort.hpp"

void bubbleSort::sort(Container* container){
int i, j, flag = 1;    // set flag to 1 to start first pass
      int temp;             // holding variable
      int numLength = container.size(); 
      for(i = 1; (i <= numLength) && flag; i++)
     {
          flag = 0;
          for (j=0; j < (numLength -1); j++)
         {
               if (container->at(j+1) > container->at(j+1))      // ascending order simply changes to <
              { 
                    container->swap(j, j+1);
                    flag = 1;               // indicates that a swap occurred.
               }
          }
     }
     return; 
} 
