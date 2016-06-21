/**
* Author 	: Mohammed Fawzan
* Problem 	: If Then Else
*/

/**
* E/12/302
*	Find the minimum vlue from a given integer array
* 	@param int* A	pointeer to an integer array
*	@param int n 	number of elements in the array
*/

#define MAXINT 0
int getMin(int *Array, int n) {

 //this is a useless comment  ? So why Did you put this anyway
  int currmin = MAXINT;    // what in the world is MAXINT  maybe I should define it in macros

  for (int i=0; i<n; i++)
  /**
    if (Array[i] > currmin)
      currmin = Array[i];
    * What the heck is this if this execute in the loop
    * it will give the maxmimum of the array the comparator should be '<'
  **/

    if (Array[i] < currmin)  // Now this is what I'm talking about
      currmin = Array[i];

  return currmin;

}
