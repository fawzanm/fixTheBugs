/**
* Author 	: Mohammed Fawzan
* Problem 	: If Then Else
*/
#include <stdio.h>
/**
*	Find the minimum vlue from a given integer array
* 	@param int* A 	pointeer to an integer array
*	@param int n 	number of elements in the array
*/
int getMin(int *Array, int n) {
  
	int currmin = MAXINT;
	int i;

	for (i=0; i<n; i++)
		//if the array[i] is less than currmin, currmin should be the minimum value
		if(Array[i] < currmin)
			currmin = Array[i];
	return currmin;
}