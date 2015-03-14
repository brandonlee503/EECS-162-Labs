#include "list.h"
#include <stdio.h>
#include <stdlib.h>

int length(struct node* head) {
    struct node* current = head;
    int count = 0;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
    
}

void push(struct node **headref, int x){
    struct node* tempnode = malloc(sizeof(struct node));
    
    tempnode -> val = x;
    tempnode -> next = *headref;
    *headref = tempnode;
    
}

void append(struct node ** headtemp, int num){
    struct node* current = *headtemp;
    struct node* newNode;
    newNode = malloc(sizeof(struct node));
    newNode->val = num;
    newNode->next = NULL;

    if (current == NULL) {
        *headtemp = newNode;
    }
    else {
        
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
    
    
}

void print(struct node * head, int x){
    struct node* current = head;
    
    while (current != NULL) {
        printf("%d ", (current->val));
        current = current->next;
    }
    
    printf("\n");
}