/**
* Author 	: Mohammed Fawzan
* Problem 	: Guilty
*/

/**
*	I need a chunk of string for given size,
*	Am I making a mistake?  You tell me. 
*/

#include <stdio.h>
#include <stdlib.h>

char * giveMeSomeMemory ( int size ){
	char * str ;
	if (size > 0)
		str =( char *) malloc ( size );
	if (size == 0)
		return NULL ;
	return ( str );
}

void main(){
	
	int size = 10;
	char * str = giveMeSomeMemory (size);

}

/***
in this code giveMeSomeMemory function consider size=1 in 1st and 2nd if statements.
Therefore in 1st if statement allocate memory for size=1.but in 2nd if statement return null for size=1.
***/