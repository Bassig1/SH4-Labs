#include <stdio.h>
#include <stdlib.h>

#include "Questions.h"
#include "math.h"


int is_diag_dom(int mat[][N2]){

    //this is the flag that is returned to tell whether the mat is diagonally dominant
	int isDiag=0;
	int sum = 0;
	int diagval; /* the diagional value which is the absolute value which is shown below */

/* i for the row j for the column*/

	//write your code below
	for(int i=0;i<N2;i++){
		for(int j=0;j<N2;j++){
			diagval = fabs(mat[i][i]);
			sum += fabs(mat[i][j]);
		}

			/* sub of fabs of values in row i*/
			sum = sum - diagval; /* to find if matrix is dominant need to subtract diagonal value*/

			if (sum < diagval){ /* if the sum is < the diagval it is diagonally dominant */
				isDiag=1;
		}


	}

	//Return 1 if the matrix is diagonally dominant and 0 otherwise
	
	


    return isDiag;
}
