#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};
    void linked List Treversal(struct node *ptr)
    {
    while(ptr != NULL)
    {
printf("%d\n" , ptr-> data);
ptr=prt->next
    }
}
int main()
{
    struct Node * head;
    struct Node *second;
    struct Node * third;
    head = (struct node *) malloc(sizeof(struct Node));
    second = (struct node *) malloc(sizeof(struct Node));
    third = (struct node *) malloc(sizeof(struct Node));
    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 50;
    third->next = NULL; 

    linked List Treversal (head);
    return 0;
}