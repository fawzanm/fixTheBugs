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

int getMin(int *Array, int n) {
 
  int currmin = Array[0];
  int i;
  for(i=0; i<n; i++)
    if (Array[i] >= currmin)
      currmin = currmin;
	else currmin=Array[i];
  return currmin;

}
int main(){
int test[]={2,3,4,5,6,7,8,9,10};

int minn=getMin(test,9);
printf("%d\n",minn);

}


