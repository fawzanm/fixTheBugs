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

 //this is a useless comment  
  int currmin = Array[0];
  int i =1;
  for ( i=1; i<n; i++)
    if (Array[i] < currmin)
      currmin = Array[i];
  return currmin;

}

int main(){
	int arry[]={2,5,7,1,4};
	printf("%d\n",getMin(arry,5));
	return 0;
}

