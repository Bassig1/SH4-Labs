#include <stdio.h>
#include <stdlib.h>
#include "Questions.h"



/* the structure student is already included in student.h otherwise would need to be in here */

student **create_class_list(char *filename, int *sizePtr){
	
	student **class_list;


	/*write your implementation here*/
	/* calloc will be used for memory implementation here */
	FILE *inputFile = fopen(filename, "r"); /* function returns a FILE pointer if it can't null is returned the "r" is for read only */
	fscanf(inputFile, "%d", sizePtr);

	class_list = calloc(*sizePtr,sizeof(student*));  /* allocates memory for the size of the class*/
	int i;
	for(i = 0; i < *sizePtr; i++){
		class_list[i] = calloc(10000,sizeof(student));
		fscanf(inputFile, "%d", &class_list[i]->student_id); /* stores argument as INT */
		fscanf(inputFile, "%s", &class_list[i]->first_name[i]);  /* stores argument as string */
		fscanf(inputFile, "%s", &class_list[i]->last_name[i]);

	}
	fclose(inputFile); /* after done reading the input file this closes it */
	/* finally return the created class list*/
	return class_list;
}

int find(int idNo, student **list, int size)
{
	/* indexing starts with 0 */
	/*write your implementation here and update the return accordingly*/
	int i;
	for(i = 0; i < size; i++){ /* iterates if id matches then is returns position */
		if(idNo == list[i] -> student_id){
			return i;
		}
	}
	return -1;
}

void input_grades(char *filename, student **list, int size)
{
	FILE *grades = fopen(filename, "r"); /* again only reading privileges given */
	/*write your implementation here*/
	int j;
	int id;
	int i;
	for(i=0; i< size; i++){ /* iterates while < size */
		fscanf(grades,"%d",&id); /* puts integer into id */
		j = find(id, list, size);
		fscanf(grades , "%d" , &list[j] -> project1_grade); /* first number value is the project1 grade second is project2 */
		fscanf(grades , "%d" , &list[j] -> project2_grade); /* this is done after sorting with find */

	}
	fclose(grades);
}

void compute_final_course_grades(student **list, int size)
{
	
	/*write your implementation here*/
	/* average is needed here for final course grade so proj 1 and proj 2 so /2 */
	int i;
	int p1;
	int p2;
	float avgfin; /* needs to be a float not an int to have proper final grades that are not rounded */
	for(i=0;i<size;i++){
		p1 = list[i] ->project1_grade;
		p2 = list[i] ->project2_grade;
		avgfin = ((p1+p2)/2.0);
		list[i] -> final_grade = avgfin; /* gives the final grade */
	}
}

void output_final_course_grades(char *filename, student **list, int size)
{
	/* outputs this into filename */
	/*write your implementation here*/
	FILE *output = fopen(filename,"w");/* would be "w" in this case since writing the file*/
	fprintf(output, "%d\n", size);
	int i;
	for (i = 0; i < size;i++){
		fprintf(output,"%d %lf \n", list[i] ->student_id, list[i] ->final_grade );
	}
	fclose(output);
}


void withdraw(int idNo, student **list, int* sizePtr)
{
	/*write your implementation here*/
	int i;
	i = find(idNo,list,*sizePtr);
	if (i==-1){
		printf("Student was not in the list\n");
	}
	else{
		printf("ID = %d,, Final Grade =%lf\n",list[i]->student_id,list[i]->final_grade);
		(*sizePtr)--;
		free(list[i]);
		for(i=0;i< *sizePtr; i++){
			list[i] = list[i+1];

		}

	}

}

void destroy_list(student **list, int *sizePtr)
{
	/*write your implementation here*/ /* memory will be deallocated here */
	/* here free is used on the list*/
	int i;
	for (i=0; i < *sizePtr; i++){
		free(list[i]); /* iterates through and frees */
	}
	free(list);
	*sizePtr = 0;
}

/*program will be written in test cases which is required for the lab */
