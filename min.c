/**
* Author 	: Mohammed Fawzan
* Problem 	: If Then Else
*/

/**
*	Find the minimum vlue from a given integer array
* 	@param int* A 	pointeer to an integer array
*	@param int n 	number of elements in the array
*/

//to get a maximum value for integers
#include<limits.h>

#include<stdio.h>

int getMin(int *Array, int n) {
  int currmin = INT_MAX;  
	int i;
  for ( i=0; i<n; i++)
    if (Array[i] < currmin)
      currmin = Array[i];
   printf("%d",currmin); 
  return currmin;

}


// Only to check the functionality

void main(){
	int n=5;
	int Array[]={1,2,3,4,10};
	getMin(Array,n);	
}

/*
	MAXINT is mentioned in the code and it should be corrected as INT_MAX.
	Also relevent header files should be included. - #include<limits.h>
	As well as in the logic to get the min "Array[i] > currmin" should be corrected as Array[i] < currmin.
*/

