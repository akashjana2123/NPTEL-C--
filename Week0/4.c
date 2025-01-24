#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct node {
    char data;
    struct node* next;
};

// Function to traverse and print as per the logic
void fun(struct node* start){
    if (start == NULL){
        return;
    }
    printf("%c ", start->data);
    if(start->next != NULL){
        fun(start->next->next);
    }
    printf("%c",start->data);
}

// Function to create a new node
struct node* createNode(char data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main() {
    // Create the linked list I->I->T->K->G->P
    struct node* start = createNode('I');
    start->next = createNode('I');
    start->next->next = createNode('T');
    start->next->next->next = createNode('K');
    start->next->next->next->next = createNode('G');
    start->next->next->next->next->next = createNode('P');

    // Call the function and print the output
    fun(start);

    return 0;
}