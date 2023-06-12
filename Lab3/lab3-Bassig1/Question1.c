#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Questions.h"



char *my_strcat(const char * const str1, const char * const str2){

	/* this is the pointer holding the string to return */
	char *z = NULL; /* null pointer implemented */

	/*write your implementation here*/
	int strlength1 = strlen(str1);
	int strlength2 = strlen(str2);
	int finalsize = strlength1 + strlength2 + 1; /* the 1 is for the null operator*/
	z = calloc(finalsize,sizeof(char)); /* the number of items to be allocated is final size and the size of the elements are characters so sizeof is used */
	int i;
	int j;
	for (i=0;i<strlength1;i++){
		*(z+i) = str1[i];  /* z[i] is equivalent to *(z+i)*/
	}
	for (j=0;j<(strlength2);j++){ /* iterates through each character and adds to string z */
		*(z+i+j) = str2[j];


	}
	/* finally, return the string*/  /* return the pointer from a function */
	return z;
	free(z); /* frees the allocated memory at the end */
}
