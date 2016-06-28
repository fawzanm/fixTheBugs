/**
* Author 	: Mohammed Fawzan
* Problem 	: Point of Origin
*/
#include <stdio.h>

/**
* I want to print some numbers
* Can U fxi mE? 
*/
int main(){

	int x;
	for(x=43; x<12423; x++){
		/* This is the place where mistake was.
		 * You must use "" for string inside printf and scanf
		 * not '' s
		 */
  		printf("x = %d \n", x);
	}
	return 0;
}
