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
	for(x=43; x<12423; x++)
  		printf("x = %d \n", x);

	return 0;
}

/*
	printf('x = %d \n', x); 
			This is the bug.  ' ' should be replaced with " " . In this way -> printf("x = %d \n", x);

	for(x=43; x<12423; x++); 
			In this case it gives only one number. I mean x = 12423 as the output. But the author is asking for some numbers. (more than one number)
			Therefore the code is modified in this way -> for(x=43; x<12423; x++) 
*/  