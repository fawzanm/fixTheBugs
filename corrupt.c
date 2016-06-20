/**
* Author 	: Mohammed Fawzan
* Problem 	: Synecdoche
*/
#include <stdio.h>

/**
* I am trying to do something with this method. Life is too short... So I'm lazy to explain myself. 
* Can you find a mistake in the code? 
* Come on! it's just 3 lines of code, you should do better by now!
* You need a clue? 
* In the hitch hikers guide to the Galaxy, 42: The answer to life, the universe and everything
*/
int main(){


	int i;
	char string[42] = "Brace your self, CO328 project is coming!!";
	int j;

	/*
		According to the output there are no compile errors and we can print the string. 
	*/

	/*
		In this code string array is defined for 42 characters.But with the \n character there is already 43 characters for that string.
		This is a mistake. The stack is created only for 42 characters and the pointer is pointed out the element 42. 
		When we define j it ignores the \n character and keeps j there. 
	*/

	return 0;
}
