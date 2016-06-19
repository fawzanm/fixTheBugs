/**
* Author 	: Mohammed Fawzan
* Problem 	: If Then Else
*/

/**
*	Find the minimum vlue from a given integer array
* 	@param int* A 	pointeer to an integer array
*	@param int n 	number of elements in the array
*/

#include <limits.h>

int getMin(int *Array, int n) {

 //this is a useless comment  
  int currmin = INT_MAX;
  int i = 0;

  for (i=0; i<n; i++)
    if (Array[i] < currmin)
      currmin = Array[i];
  return currmin;

}
int main(){
	// this is only for compile
}


