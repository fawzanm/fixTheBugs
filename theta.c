/**
* Author 	: Mohammed Fawzan
* Problem 	: Guilty
*/
#include <stdio.h>
/**
*	I need a chunk of string for given size,
*	Am I making a mistake?  You tell me. 
*/



char * giveMeSomeMemory ( int size ){
	char * str ;
	if (size > 0)
		str =( char *) malloc ( size );
	else
		return NULL ;

		
	return ( str );
}
