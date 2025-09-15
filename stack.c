#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node * ptr;
}
*top,*temp,*top1;
int topelement();
void push(intdata);
void pop();
void empty();
void display();
void stackcount();
int count=0;
void destroy();
void create();
void main()
{
    int no,ch,e;
    clrscr();
    printf("\n1.PUSH\n2.POP\n3.TOP\n4.EMPTY\n5.EXIT\n6.DISPLAY\n7.STACKCOUNT\n8.DESTROY");
    create();
    while(1)
    {
        printf("Enter the choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("Enter the data:\n");
            scanf("%d",&no);
            push(no);
            break;
            case 2:pop();
            break;
            case 3:if (top==NULL)
            printf("The stack is empty\n");
            else
            {
                e=topelement();
                printf("The top lement in")
            }
        }
    }
}