#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

node *head = NULL;
node* createNode(int data);
void addFirst(int data);

int main() {
   addFirst(50);

   return 0;
}
void addFirst(int data){
    node* newnode = createNode(data);
    if(head == NULL){
        head = newnode;
    }
    else {
        newnode -> next = head;
        head = newnode;
    }
}

node* createNode(int data){
    node *newnode = (node*)malloc(sizeof(node));
    if(newnode == NULL){
        printf("Error");
    }
    else {
        newnode ->data = data;
        newnode ->next = NULL;
    }
    return newnode;
}