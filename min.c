/**
* Author 	: Mohammed Fawzan
* Problem 	: If Then Else
*/

#include<stdio.h>
#define MAXINT 100000;

/**
*	Find the minimum vlue from a given integer array
* 	@param int* A 	pointeer to an integer array
*	@param int n 	number of elements in the array
*/
int getMin(int *Array, int n) {

 //this is a useless comment  
  int currmin = MAXINT;
  int i;
  for (i = 0; i < n; i++)
    if (Array[i] < currmin)
      currmin = Array[i];
  return currmin;

}

int main(){

	int A[] = {4, 5, 6, 1, 3, 4, 5, 10};
	int min = getMin(A, 8);
	printf("min = %d\n", min);
	return 0;
}

