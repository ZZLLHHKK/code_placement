#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

//double linked list

int main(){
    struct Node *node = malloc(sizeof(struct Node));
    node -> prev = NULL;
    node -> data = 10;
    node -> next = malloc(sizeof(struct Node));
    node -> next -> prev = node;
    node -> next -> data = 100;
    node -> next -> next = malloc(sizeof(struct Node));
    node -> next -> next -> prev = node -> next;
    node -> next -> next -> data = 1000;
    node -> next -> next -> next = NULL;

    struct Node *j = node -> next -> next;
    while(j != NULL){
        printf("%d ", j -> data);
        j = j -> prev;
    }
}
