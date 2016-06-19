/**
* Author 	: Mohammed Fawzan
* Problem 	: Guilty
*/

/**
*	I need a chunk of string for given size,
*	Am I making a mistake?  You tell me. 
*/
+#include<stdlib.h>
#define NULL 0

char * giveMeSomeMemory ( int size ){
	char * str ;
	if (size > 0)
		-str =( char *) malloc ( size );
		+str =( char *) malloc ( size * sizeof(char) );
	-if (size == 1)
	+else
		return NULL ;
	return ( str );
}
