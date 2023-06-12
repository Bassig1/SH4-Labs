
#include "Questions.h"
int Q1_for(){
	int sum = 0;

	// calculate your sum below..this has to use for loop
	int first = 30;
	int i;
	for(i = first; i <= 1000; i++)
	{
		if(i%4 == 0)
		{
			sum += i;
		}
	}

	/* for loop here where i is being iterated and if it is a multiple of 4 this counter is added to sum which then returns at the end to detemine the total sum*/
	// here, we return the calcualted sum:
	return sum;



}
int Q1_while(){
	int sum = 0;



		// calculate your sum below..this has to use while loop
		int i;
		int first = 30;
		i = first;
		while ( i <= 1000){
			if (i % 4 == 0){
				sum += i;}
				i++;

		}
		/* While  loop does the same thing as the for loop but is written differently, the sum is added for the numbers which are divisible by 4*/

		// here, we return the calcualted sum:
	return sum;


}
int Q1_do(){
	int sum = 0;
	int i;
	int first = 30;
	i = first;
	do{
		if (i %4 == 0){
			sum += i;
		}
		i++;
	}
	while (i<=1000);

	return sum;
}
//===============================================================================================
int Q2(int Q2_input){

	// this is the flag that is holding whether the input number is 5-digit or not
	int IsFiveDigit;

	// Do your coding below to check
	if((Q2_input <= 99999 && Q2_input >= 10000) || (Q2_input <= -10000 && Q2_input >= -99999)){
		IsFiveDigit = 1;}
	else
	{
		IsFiveDigit = 0;
	}

	/* using logical operators both AND and OR this determines if the number is between 99999 and 10000 to be 5 digit for positive, Or if the number is greater than -99999 and less than -10000 to check if its a negative 5 digit number */



	//finally, we must return IsFiveDigit, which must be 1 is the number is five digits and 0 otherwise
	return IsFiveDigit;
}
//===============================================================================================
int Q3(float Q3_input){

	/* Question 3:
	Write a program that takes a student's Q3_input as an input, which is a floating point value,
	and returns:
	4 if the Q3_input is in the range 90-100,
	3 if it is in the range 80-89,
	2 if it is in the range 70-79,
	1 if it is in the range 60-69 and
	0 if the Q3_input is between 0 and 59.
	If the Q3_input is not in the range 0-100, the program shouldreturn -1
*/
	// this is the variable that holds the out value to return
	/* Here an if and else if ladder statement would work for determining the output for the value with an else statement for if its not in the range of 0.00 to 100.00 for floating point */
	float GPA;


	// Do your coding below to calculate the GPA variable value
	if (Q3_input >= 90 && Q3_input <= 100){
		GPA = 4;
	}
	else if (Q3_input >= 80 && Q3_input < 90){
		GPA = 3;
	}
	else if (Q3_input >= 70 && Q3_input < 80){
		GPA = 2;
	}
	else if (Q3_input >= 60 && Q3_input < 70){
		GPA = 1;
	}
	else if (Q3_input >= 0 && Q3_input < 60){
		GPA = 0;
	}   /* the else if ladder returns the desired values but if less than 0 or greater than 100 returns -1 */
	else if (Q3_input < 0 || Q3_input >100){
		GPA = -1;
	}
	// finally, we return the GPA
	return GPA;
}
//===============================================================================================
double Q4(int Q4_input){

	// this is the varaible that holds the pi value to return
	double pi=4;
	int i;
	int div = ((i*2)+1);

	for(int i=1; i<Q4_input; i++){
		if (i %2 == 0){
			pi += (4/div);

		}
		else
			pi = pi - (4/div);
	}
	return pi;
}
//===============================================================================================
int Q5(){

	// this is the varaible that holds and the total number of triples to return at the end of the function
	int totNumTribles=0;


	/* Do your coding below
		Use a triple-nested for loop that simply tries all possibilities
		and update the total number of triples if needed
	*/




	//finally you should return the total number of tribles.
	return totNumTribles;
}
//===============================================================================================
int Q6(int Q6_input, int perfect[]){



		//counts is teh variable that should hold the total number of found perfect numbers
		//you should update it within your code and return it at the end
	    int counts=0;


		/*
		*
		*perfect is an array that you need to add into it any perfect number you find
		*which means at the end of this function, the perfect[] array should hold all the found perfect numbers in the range
		*you do not need to return perfect because as stated in lectures arrays are already passed by reference. so, modifying them will
		*autmoatically reflect in the main calling function.
		*/






	   return counts;


}
//===============================================================================================
int Q7a(int Q7_input){

	//this is the variable that holds the reversed int.
	int reversedInt=0;


	// Do your coding logic here
	//Hint: Use the division and remainder operators to separate the number into its individual digits.
	//in this part you can assume the knowledge of the number of digits: seven-digit positive integer


		return reversedInt;

}
int Q7b(int Q7b_input){

	//this is the variable that holds the reversed int.
	int reversedInt=0;



	// Do your coding logic here
	//Hint: Use the division and remainder operators to separate the number into its individual digits.
	//this part should be generalized for any number of allowed digits



	return reversedInt;




}
