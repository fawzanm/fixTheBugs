#include <stdio.h>

/**
* Author 	: Mohammed Fawzan
* Problem 	: If Then Else
*/

/**
*	Find the minimum vlue from a given integer array
* 	@param int* A 	pointeer to an integer array
*	@param int n 	number of elements in the array
*/

/**
int getMin(int *Array, int n) {
  
  int currmin = MAXINT;

  for (int i=0; i<n; i++)
    if (Array[i] > currmin)
      currmin = Array[i];
  return currmin;

}
*/


int getMin(int *Array, int n){
	int currmin = Array[0];
	
	for (int i = 1; i < n; i++){
		if (Array[i] < currmin)
			currmin = Array[i];
	}
			
	return currmin;
}

int main(){
	int array[] = {490,518,987,787,1000, 587, 897, 654, 125};
	int length = sizeof(array)/sizeof(int);
	printf("%d \n", getMin(array,length));

	return 0;
	
}
