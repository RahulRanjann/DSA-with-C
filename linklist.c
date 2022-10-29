#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
}node;

void print(node*n)
{
    printf("The element are:-");
    while (n!= NULL)
    {               
        printf("%d\t",n->data);
        n = n->next;
    }
    
}
void push(node* n)
{
    node* new;
    new = (node*)(malloc(sizeof(node)));
    new->data = 200;
    new-> next = n->next;
}


int main(int argc, char const *argv[])
{
    node* head;
    node* second;
    node* third;
    node* last;

    head = (node*) malloc(sizeof(node));
    second = (node*) malloc(sizeof(node)); 
    third = (node*) malloc(sizeof(node));
    last = (node*) malloc(sizeof(node));
   
    head->data = 1;
    head->next = second;

    second-> data = 2;
    second-> next = third;

    third->data = 5;
    third-> next = last;

    last->data = 100;
    last-> next = NULL;

    print(head);
    push(head);
    print(head);
    return 0;
}
