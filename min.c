/**
* Author 	: Mohammed Fawzan
* Problem 	: If Then Else
*/

/**
*	Find the minimum vlue from a given integer array
* 	@param int* A 	pointeer to an integer array
*	@param int n 	number of elements in the array
*/

	#include <stdio.h>
	
int getMin(int *Array, int n) {

 //this is a useless comment  
 
 //have to initialize MAXINT variable with very large number
  int MAXINT=100000000;
  int currmin = MAXINT;

  for (int i=0; i<n; i++)
	  
   /*to find minimum we have to change curent minim value  if (Array[i] < currmin)
    it is not if (Array[i] > currmin)*/
    if (Array[i] < currmin)
      currmin = Array[i];
  return currmin;

}


int main(){
	
	int A[3]={1,2,3};
	int min=getMin(A,3);
	printf("%d",min);
}
