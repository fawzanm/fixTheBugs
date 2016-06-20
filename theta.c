/**
* Author 	: Mohammed Fawzan
* Problem 	: Guilty
*/

/**
*	I need a chunk of string for given size,
*	Am I making a mistake?  You tell me. 
*/

#include <stdlib.h>
//#define NULL 0

char * giveMeSomeMemory ( int size ){
	char * str ;
	if (size > 0)
		str =( char *) malloc ( size );
	if (size == 0) //the bug is fixed here. The code " size == 1 " should be modified as " size == 0 "
		return NULL ;
	return ( str );
}

//only to check the functionality
void main(){
	
}