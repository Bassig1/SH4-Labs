/*
 * SLLSet.cpp
 *
 *  Created on: Nov. 17, 2021
 *      Author: moham
 */


#include "SLLSet.h"
#include <iostream>
#include <string>
using namespace std;

SLLSet::SLLSet()
{
	size = 0;
	head = NULL; /* already done*/
}
SLLSet::SLLSet(int sortedArray[], int arrSize)
{ /* constructor to contain integers */
	SLLNode* HeadPTR;
	size = arrSize; /* size is given*/ /* intizliazes the head */
	head = new SLLNode(sortedArray[0], NULL) ;
	HeadPTR = head;


	for(int i=1; i<arrSize ; i++){
	HeadPTR ->next = new SLLNode(sortedArray[i],NULL);
	HeadPTR = HeadPTR -> next;
				/* goes to next value */}
}

int SLLSet::getSize()
{
	 int size = 0;
	SLLNode* current = head;
	while(current != NULL){
		size ++;

			current = current->next;

		}
	return size;
 /* returns counter which is iterates through the list */
}
SLLSet SLLSet::copy()
{
	SLLNode*current = head;
	SLLNode*temp = current;
	head = new SLLNode;
	head->value = temp->value;
	head->next = NULL;
	current = head;
	temp = temp->next;

	while (temp != NULL){
		current->next = new SLLNode;
		current = current ->next;
		current->value = temp->value;
		current->next = NULL;
		temp = temp -> next;
	}



	 return *(new SLLSet());
}
bool SLLSet::isIn(int v)
{
    //fixME
	return false;
}
void SLLSet::add(int v)
{
    if (head == NULL){
    	head = new SLLNode();
    }
    else{
    	head->next = new SLLNode();
    	head = head->next;
    }
}
void SLLSet::remove(int v)
{
   
}
SLLSet SLLSet::setUnion(SLLSet s)
{



    	//fixME
	return *(new SLLSet());
}
SLLSet SLLSet::intersection(SLLSet s)
{
    	//fixME
	 return *(new SLLSet());
}
SLLSet SLLSet::difference(SLLSet s)
{
    	//fixME
	 return *(new SLLSet());
}
SLLSet SLLSet::setUnion(SLLSet sArray[],int size)
{
    	//fixME
	 return *(new SLLSet());
}
string SLLSet::toString()
{
SLLNode*current = head;
string str = ""; /* initilaize string*/
while(current != NULL){ /* while the current value is not null */
	str += to_string(current->value);
	if(current->next != NULL){
		str += ", "; /* seperation of comma and space */
		current = current -> next; /* goes to next value */
	}
}
//fixME
   return str;
}

