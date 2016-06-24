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
	if (size > 1)
		str =( char *) malloc ( size*sizeof(char) );
	else
		return NULL ;
	return ( str );
}
