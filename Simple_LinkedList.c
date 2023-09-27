# include <stdio.h>
# include <stdlib.h>

//define node structure
struct node
{
    int data;
    struct node* next;
};

struct node* create(int);
struct node* insert(struct node*,int);
void printlist(struct node*);

int main()
{
    struct node* head=NULL;
    
    head = insert(head,10);
    head = insert(head,20);
    head = insert(head,40);
    head = insert(head,10);
    
    /*print the linked list */
    printf("Linked list:\n");
    printlist(head);
    
    return 0;
}

/* Function to insert values into linked list*/
struct node* insert(struct node* head,int data)
{
    struct node* new_node = create(data);
    
    new_node->next = head;
    
    return new_node;
}

/* Function to create the linked list*/
struct node* create(int num)
{
    struct node* new_node = malloc(sizeof(struct node));
    /* Check if memory allocated*/
    if(new_node == NULL)
    {
        printf("Error while allocating the memory!\n");
    }
    
    new_node->data = num;
    new_node->next = NULL;
    
    return new_node;
}

/* Function to print the elements of the linked list*/
void printlist(struct node* llist)
{
    struct node* new_node = llist;
    
    while(new_node != NULL)
    {
        printf("%d ",new_node->data);
        new_node = new_node->next;
    }
    
}