/**
* Author 	: Mohammed Fawzan
* Problem 	: If Then Else
*/

/**
*	Find the minimum vlue from a given integer array
* 	@param int* A 	pointeer to an integer array
*	@param int n 	number of elements in the array
*/
#include <limits.h>

int getMin(int *Array, int n) {

 //this is a useless comment  
  //int currmin = MAXINT;
 int currmin = INT_MAX;

  for (int i=0; i<n; i++)
    //if (Array[i] > currmin)
    if (Array[i] < currmin)
      	currmin = Array[i];
  return currmin;

}



