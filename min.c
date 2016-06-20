#include <stdio.h>
#define MAXINT 256
/**
*	Find the minimum vlue from a given integer array
* 	@param int* A 	pointeer to an integer array
*	@param int n 	number of elements in the array
*/
int getMin(int *Array, int n) {

 //this is a useless comment  
  int i;
  int currmin = MAXINT;

  for (i=0; i<n; i++)
    if (Array[i] < currmin)
      currmin = Array[i];
      
  return currmin;

}



