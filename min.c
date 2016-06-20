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
#define MAXINT 100000 //define maximum value
 
int getMin(int *Array, int n) {

 //this is a useless comment  
  int currmin = MAXINT;

  for (int i=0; i<n; i++)
    if (Array[i] < currmin)
      currmin = Array[i];
      
return currmin;
}

//get the length of the int array
int get_len(int *array){
	int i=0;
	while(array[i++] != '\0');

return i-1;
}

int main(){
	
	int array[MAXINT] = {10,25,423,7,13,623,45,3};	
	printf("%d\n",getMin(array,get_len(array))); //print the minimum value
	
}


