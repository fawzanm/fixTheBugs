/**
* Author 	: Mohammed Fawzan
* Problem 	: Guilty
*/

/**
* E/12/302
*	I need a chunk of string for given size,
*	Am I making a mistake?  You tell me.
*/
#include <stdlib.h>


char * giveMeSomeMemory ( int size ){
	char * str ;
	if (size > 0)
		str =( char *) malloc ( size * sizeof(char) );
		/** What the HEll....This is So wrong
		* I can not even  at this I'm going to comment this
		* str =( char *) malloc ( size );
		* the arguments of malloc function should be malloc(size*sizeof(char));
		* Oh almost forget I need to import stdlib.h to to use sizeof function
		* not in every compiler anyway i'm going to include it
		**/
	if (size == 1)
		return NULL ;
	return ( str );  // why brackets here any way I'm Cool with this
}
