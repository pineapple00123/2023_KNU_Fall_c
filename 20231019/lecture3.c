#include <stdio.h>
#include <stdlib.h>

typedef struct _NODE
{
    int data;
    struct _NODE *next;
} NODE;

void print_list(NODE *head)
{
    NODE *p = head->next;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void insert_node_last(NODE *head, int data)
{
    NODE *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }

    NODE *new_node = (NODE *)malloc(sizeof(NODE));
    new_node->data = data;
    new_node->next = p->next;
    p->next = new_node;
}
void insert_node_first(NODE *head, int data)
{
    NODE *new_node = (NODE *)malloc(sizeof(NODE));
    new_node->data = data;
    new_node->next = head->next;
    head->next = new_node;
}
void delete_node_first(NODE *head)
{
    NODE *p = head->next->next;
    free(head->next);
    head->next = p;
}
void delete_node_last(NODE *head)
{
    NODE *p = head->next;
    NODE *p_prev = head;
    while (p->next != NULL)
    {
        p_prev = p;
        p = p->next;
    }
    free(p);
    p_prev->next = NULL;
}
int main(void)
{
    NODE *head = (NODE *)malloc(sizeof(NODE));
    head->next = NULL; // -> 구조체 접근 원래는 (*head).next는 직접 참조

    NODE *n1 = (NODE *)malloc(sizeof(NODE));
    n1->data = 1;
    n1->next = head->next;
    head->next = n1;

    NODE *n2 = (NODE *)malloc(sizeof(NODE));
    n2->data = 2;
    n2->next = n1->next;
    n1->next = n2;

    NODE *n3 = (NODE *)malloc(sizeof(NODE));
    n3->data = 3;
    n3->next = n2->next;
    n2->next = n3;

    print_list(head);
    printf("\n");

    insert_node_last(head, 4);
    print_list(head);
    printf("\n");

    insert_node_first(head, 6);
    print_list(head);
    printf("\n");

    delete_node_first(head);
    delete_node_first(head);
    print_list(head);
    printf("\n");

    delete_node_last(head);
    print_list(head);
    printf("\n");
    return 0;
}