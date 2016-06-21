/**
* Author 	: Mohammed Fawzan
* Problem 	: Point of Origin
*/
#include <stdio.h>

/**
* E/12/302
* I want to print some numbers
* Can U fxi mE? Oh Yeah Baby....
*/
int main(){

	int x;
	char l = 'A';
	for(x=43; x<12423; x++)
  		printf("x = %d \n", x);
  /**
	* Wrong use of printf function it should be
	* Double cotations("...") not single
	* If You want to print some numbers why in the world
	* use for(x=43; x<12423; x++); this semi colan then it will
	* only print the last number of the loop
	***/

	return 0;
}
