#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

void print(node *n)
{
    printf("The element are:- ");
    while (n != NULL)
    {
        printf("%d\t", n->data);
        n = n->next;
    }
    printf("\n");
}
node *insertAt0(node *head, int d)
{
    printf("After insertAt0\n ");
    node *p = (node *)malloc(sizeof(node));
    p->next = head;
    p->data = d;
    return p;
}

node *insertInBetween(node *head, int d, int index)
{
    if (index == 0)
    {
        printf("This method will not work at the index 0");
    }
    else
    {

        printf("After insertAt%d \n", index);
        node *p = head;
        node *p2 = (node *)malloc(sizeof(node));

        while (1 != index - 1)
        {
            p = p->next;
            index--;
        }
        p2->data = d;
        p2->next = p->next;
        p->next = p2;
        return head;
    }
}

node* insertAtEnd(node* head, int data)
{
    printf("After insertion in end  \n");
    node* p = head;
    node* ptr = (node*)malloc(sizeof(node));
    ptr-> data = data;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

int main(int argc, char const *argv[])
{
    node *head;
    node *second;
    node *third;
    node *last;

    head = (node *)malloc(sizeof(node));
    second = (node *)malloc(sizeof(node));
    third = (node *)malloc(sizeof(node));
    last = (node *)malloc(sizeof(node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 5;
    third->next = last;

    last->data = 100;
    last->next = NULL;

    print(head);
    head = insertAt0(head, 17);
    print(head);
    head = insertInBetween(head, 15, 3);
    print(head);
    head = insertAtEnd(head, 200);
    print(head);

    return 0;
}
