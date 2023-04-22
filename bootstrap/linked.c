#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;

int main(){
    struct node *newNode = (struct node*) malloc (sizeof(struct node));
    newNode->data = 2;
    newNode->next = NULL;
    newNode->prev = NULL;
    head = newNode;
    tail = NULL;

    struct node *newNode2 = (struct node*) malloc (sizeof(struct node));
    newNode2->data = 3;
    newNode2->prev = NULL;
    newNode2->next = newNode;
    newNode->prev = head;
    head = newNode2;
    tail = newNode;

    struct node *newNode3 = (struct node*) malloc (sizeof(struct node));
    newNode3->data = 1;
    newNode3->prev = NULL;
    newNode3->next = newNode2;
    newNode2->prev = head;
    head = newNode3;

    struct node *curr = head;
    while(curr != NULL) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    return 0;
}