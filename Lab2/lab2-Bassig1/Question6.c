#include <stdio.h>
#include <stdlib.h>
#include "Questions.h"


void efficient(const int source[], int val[], int pos[], int size){
int i;
int j = 0; /* initialize j at 0 due to array starting at 0 */
for (i = 0; i<size; i++){
	if(source[i] != 0){ /* condition for the source not being 0 and storing the value */
		val[j] = source[i]; /* stores the value for non zero number */
		pos[j] = i; /* stores position in variable j*/
		j++;
	}
}
	

}

void reconstruct(int source[], int m, const int val[], const int pos[], int n){
int i;
int j = 0;
/* reconstructs the same vector*/
for(i=0; i<m;i++){ /* size of array source increment through */
	for(j=0;j<n;j++){
		if (i == pos[j]){ /* checks if value is in the position */
			source[i] = val[j];  /* if values in position gives source */
			/* reconstructs vector sources from representation stored in pos and val */
			j++; /* increments */
		}
	}
}

}
