# include <stdio.h>
# include <stdlib.h>
# define SIZE 10

int arr[SIZE],top=0,x;

void push(int);
int pop();

int main()
{
   push(10);
   push(20);
   push(50);
   x = pop();
   printf("Popped value is %d\n",x);
   return 0;
}

/* Function to push the given value*/
void push(int num)
{
    if(top>=SIZE)
    {
        printf("stack is full\n");
        exit(1);
    }
    arr[top]=num;
    top++;
    
}

/* Function to pop the given value*/
int pop()
{
    if(top-1 < 0)
    {
        printf("You have already retrieved all the values from stack\n");
        exit(1);
    }
    return(arr[--top]);
}