#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Questions.h"

void letter_freq(const char word[], int freq[]){
	int i;
	int j; /* for counting */
	for (i=0;word[i] != '\0'; i++){ /* goes through all characters until termination */
	int c = 0; /* counter for frequency */
		for (j=97;j <= 122; j++){/* iterates through check for lower case letters*/
			if (word[i] == (char)j){    /* if statement and an else if are needed to keep track of both upper case and lower case letters */
				freq[c] += 1;}
			else if(word[i] == (char)(j-32)){ /* this is j -32 as this accounts for upper case letters as the difference is 32 for the ASCII values */
				freq[c] += 1;
			}
		 /* counter is incremented*/
		c++;}
		}
}

