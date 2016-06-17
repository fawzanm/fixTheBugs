/**
* Author 	: Mohammed Fawzan
* Problem 	: Guilty
*/

/**
*	I need a chunk of string for given size,
*	Am I making a mistake?  You tell me.
	Ans:I changed as if else func and import the library 
*/

#include <stdio.h>

char * giveMeSomeMemory ( int size ){
	char * str;
	if (size > 0)
		str =( char *) malloc ( size );
	else
		return NULL;
	return ( str );
}
