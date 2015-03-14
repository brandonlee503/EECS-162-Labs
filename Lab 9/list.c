//Program is asking me to take in number of user inputs 
//and adding the number orderedly to the list

#include "list.h" 
#include <stdio.h> 
#include <stdlib.h> 

//Computes number of elements in the list and does the physical linking
//Takes in a linked list and computers the number of elements in the list.
int length(struct node* head){
	struct node* current =  head;
	int count = 0;

	while(current != NULL){
		count++;
		current = current->next;
	}
	return count;
}

//add to front of list aka InsertAtFront()
void push(struct node **headref, int data){
	struct node* newnode = malloc(sizeof(struct node));

	newnode->val = data;
	newnode->next = *headref; //the * to dereferences back to the real head
	*headref = newnode; //same comment as above
}

//add to rear of list 
void append(struct node **headref1, int num){
	struct node* current = *headref1;
	struct node* newnode;

	newnode = malloc(sizeof(struct node));
	newnode->val = num;
	newnode->next = NULL;

	//Special case for length = 0
	if(current==NULL){
		*headref1=newnode;
	}
	else{
		//Locate last node
		current=current->next;
	}
}
 
void print(struct node * head, int p){
	struct node* current =head;
	while(current != NULL){
		printf("%d ", (current->val));
		current=current->next;
	}
	printf("\n");
}
