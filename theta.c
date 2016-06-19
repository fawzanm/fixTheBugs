/**
* Author 	: Mohammed Fawzan
* Problem 	: Guilty
*/

/**
*	I need a chunk of string for given size,
*	Am I making a mistake?  You tell me. 
*/



char * giveMeSomeMemory ( int size ){
	char * str ;
	if (size > 1)  // fix memory leak 
		str =( char *) malloc ( size );
	if (size == 1)
		return NULL ;
	return ( str );
}
