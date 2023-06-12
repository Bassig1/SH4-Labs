#include <stdio.h>
#include <stdlib.h>
#include "Questions.h"

void string_copy(const char source[], char destination[], int n){

int i;

	for(i=0; i<n-1;i++){  /* n-1 due to string being number of characters in array appearing before null character*/
		destination[i] = source [i];} /* iteraties and copies string source to the source destination */


}
