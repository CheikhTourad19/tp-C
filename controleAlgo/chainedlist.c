#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void printlist(struct Node *n)
{
    int i = 1;
    struct Node *tmp = n;
    while (tmp != NULL)
    {
        printf("%d : %d \n", i, tmp->data);
        tmp = tmp->next;
        i++;
    }
}
void addtolist(struct Node *n, int data)
{
    struct Node *tmp = n;
    struct Node *new = NULL;
    new = malloc(sizeof(struct Node));
    new->data = data;
    new->next = NULL;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = new;
};

int main()
{
    struct Node *head = NULL;
    struct Node *second = NULL;
    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = NULL;

    printlist(head);
    addtolist(head, 30);
    printlist(head);
}