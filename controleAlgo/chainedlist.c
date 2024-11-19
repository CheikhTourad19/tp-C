#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
int sommelist(struct Node *n)
{
    struct Node *tmp = n;
    int somme = 0;
    while (tmp != NULL)
    {
        somme = somme + tmp->data;
        tmp = tmp->next;
    }
    return somme;
}
void addtolist(struct Node *n, int data)
{
    struct Node *tmp = n;
    struct Node *new = malloc(sizeof(struct Node));
    if (new == NULL)
    {
        printf("erreur d'allocation");
        return;
    }

    new->data = data;
    new->next = NULL;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = new;
};
void removefromlist(int data, struct Node *n)
{
    struct Node *tmp = n;
    while (tmp != NULL)
    {
        if (tmp->data != data)
        {
            tmp = tmp->next;
        }
        // else
        //{
        // tmp;
        //}
    }
}
int searchinlist(struct Node *n, int data)
{
    int i = 1;
    struct Node *tmp = n;
    while (tmp != NULL)
    {
        if (tmp->data == data)
        {
            return i;
        }
        else
        {
            tmp = tmp->next;
            i++;
        }
    }
    return -1;
}

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

    // printlist(head);
    for (int i = 0; i < 20; i++)
    {
        addtolist(head, i + 1);
    }

    printlist(head);
    printf("sommme des element est de : %d \n", sommelist(head));
    int trouve = searchinlist(head, 19);
    if (trouve == -1)
    {
        printf("l'element 19 n'est pas dans la liste");
    }
    else
    {
        printf("l'element 19 est l'element %d ", trouve);
    }

    // return 0;
}