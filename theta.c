#include <stdio.h>
#include <stdlib.h>
/**
* Author 	: Mohammed Fawzan
* Problem 	: Guilty
*/

/**
*	I need a chunk of string for given size,
*	Am I making a mistake?  You tell me. 
*/

/**
*	Yes, you are making a mistake, minimum size of a string can be 1 character thus we need 
*	atleast size = 1, else we need to return null.
*/



char * giveMeSomeMemory ( int size ){
	char * str ;
	if (size > 0) {
		str =( char *) malloc ( size );
	} else {
		return NULL ;
	}
		
	return ( str );
}


