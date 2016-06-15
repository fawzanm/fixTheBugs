/**
* Author 	: Mohammed Fawzan
* Problem 	: Guilty
*/

/**
*	I need a chunk of string for given size,
*	Am I making a mistake?  You tell me. 
*/



char * giveMeSomeMemory ( int size ){
	if (size > 0)
		return ( char *) malloc ( size );
	else
		return ( char *) NULL;
}
