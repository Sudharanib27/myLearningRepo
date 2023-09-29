# include <stdio.h>
# include <stdlib.h>

/*define node structure*/
struct node
{
    int data;
    struct node* next;
};

struct node *head=NULL, *next_node=NULL;

struct node* insert_node(struct node*,int);
struct node* create_node(int);

/*print the linked list */
printf("Linked list:\n");
void print_list(struct node*);

int main()
{
    
    
    head = insert_node(head,10);
    next_node = insert_node(head,30);
    next_node = insert_node(next_node,20);
    next_node = insert_node(next_node,50);

    /*Print the linked list*/
    print_list(head);
    return 0;
}

/* Function to insert values into linked list*/
struct node* insert_node(struct node* prev_node,int data)
{
    struct node* new_node = create_node(data);
    
    if(prev_node != NULL)
    {
        prev_node->next = new_node;
    }
    

    return new_node;
}

/* Function to create the linked list*/
struct node* create_node(int data)
{
    struct node* new_node = malloc(sizeof(struct node));
	/* Check if memory allocated*/
    if(new_node == NULL)
    {
        printf("Memory did not allocated for the linked list successfully!\n");
    }
    new_node->data = data;
    new_node->next = NULL;

    return new_node;
}

/* Function to print the elements of the linked list*/
void print_list(struct node* head)
{
    struct node* new_node = head;

    while(new_node!= NULL)
    {
        printf("%d ",new_node->data);
        new_node = new_node->next;
    }
}

