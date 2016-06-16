/**
* Author 	: Mohammed Fawzan
* Problem 	: If Then Else
*/

/**
*	Find the minimum vlue from a given integer array
* 	@param int* A 	pointeer to an integer array
*	@param int n 	number of elements in the array
*/
int getMin(int *Array, int n) {
  
  int currmin = Array[0];
  int i;
  for (i=0; i<n; i++){
    if (Array[i] < currmin)currmin = Array[i];
  }
  return currmin;

}