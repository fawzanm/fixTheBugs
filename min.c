/**
* Author 	: Mohammed Fawzan
* Problem 	: If Then Else
*/

/**
*	Find the minimum vlue from a given integer array
* 	@param int* A 	pointeer to an integer array
*	@param int n 	number of elements in the array
*/
#include<stdio.h>
#include <limits.h>

int getMin(int *Array, int n) {

 //this is a useless comment  
  int currmin = INT_MAX;

  for (int i=0; i<n; i++)
    if (Array[i] < currmin)
      currmin = Array[i];
  return currmin;

}

 
//this is a small useless fix
void main(){
	int Array[10] = {23,13,6,8,54,67,98,3,27,63}; 
	printf("%i",getMin(Array,10));
}

/*** change   int currmin = MAXINT; to  int currmin = INT_MAX;
							and 
	if (Array[i] > currmin) to  if (Array[i] < currmin)
		
	import the file <limits.h>
***/
