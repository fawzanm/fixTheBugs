/**
* Author 	: Mohammed Fawzan
* Problem 	: Guilty
*/

/**
*	I need a chunk of string for given size,
*	Am I making a mistake?  You tell me. 
*/



char * giveMeSomeMemory ( int size ){
	char * str = NULL ;
	if (size > 0)
		str =( char *) malloc ( size );
	//if (size == 0)
	//	return NULL ;
	return ( str );
}
