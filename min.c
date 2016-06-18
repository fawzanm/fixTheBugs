/**
* Author 	: Mohammed Fawzan
* Problem 	: If Then Else
*/

/**
*	Find the minimum value from a given integer array
* 	@param int* A 	pointeer to an integer array
*	@param int n 	number of elements in the array
*/

#define MAXINT 256

int getMin(int *Array, int n){
 
  int currmin = MAXINT;
  int i;

  for (i=0; i<n; i++)
    if (Array[i] < currmin)
      currmin = Array[i];
  return currmin;

}