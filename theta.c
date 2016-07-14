/**
* Author 	: Mohammed Fawzan
* Problem 	: Guilty
*/

/**
*	I need a chunk of string for given size,
*	Am I making a mistake?  You tell me. 
*/

#include <stdlib.h>

char * giveMeSomeMemory ( int size ){
	char * str ;
	if (size > 0)
		str =( char *) malloc (sizeof(char)* size +1 );
		str[size] = 0;
	if (size == 1)
		return NULL; 
	return ( str );
}


