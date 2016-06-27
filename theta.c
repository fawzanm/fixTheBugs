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

//#define NULL 0
//NULL is Null, Can't use KEYWORDS for decleration.
char *giveMeSomeMemory(int size){
	char *str ;
	if (size == 0)
		return NULL ;
	if (size > 0)
		str =(char *) malloc(size);

	return str;
}

int main(){
	printf("%d \n",giveMeSomeMemory(1));
}
