/**
* Author 	: Mohammed Fawzan
* Problem 	: Guilty
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/**
*	I need a chunk of string for given size,
*	Am I making a mistake?  You tell me. 
*/

char *giveMeSomeMemory ( int size ){
	char * str ;
	if (size > 0)
		str = (char *) malloc ( size*sizeof(char) ); //create string array size of 50
	
	if (size == 1)
		return NULL ;
		
return (str);
}

int main(){
	
	char *tr = giveMeSomeMemory(50); //get string with 50 chars.
	
	strcpy( tr, "Zara ali a DPS student in class 10th" ); //copy some data to array
	printf("%s\n",tr); //print the string array

return 0;
}
