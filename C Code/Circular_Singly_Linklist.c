#include<stdio.h>
#include<stdlib.h>
void create(int);
void deletebeg();
void deletelast();
void display();
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void main()
{
    int choice,n;
    do
    {
        printf("1.List \n 2.Delete Node from beginning\n 3.Delete last \n 5.Exit");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :
            printf("\nEnter Node\n");
            scanf("%d",&n);
            create(n);
            break;
            case 2 :
            deletebeg();
            break;
            case 3 :
            deletelast();
            break;
            case 4 :
            display();
            break;
            case 5 :
            exit(0);

            default :
            printf("\n Please Enter Valid choice \n");
        }
    } while(choice != 3);
}
void create(int n)
{
    struct node *ptr =(struct node *)malloc(sizeof(struct node));
    struct node *temp;
    if(ptr == NULL)
    {
        printf("\nOVERFLOW\n");
    }else
    {
        ptr->data=n;
        if(head==NULL)
        {
            head=ptr;
            ptr->next=head;
        }
        else
        {
            temp=head;
            while(temp->next!=head)
            temp=temp->next;
            ptr->next=ptr;
            head=ptr;
        }
    }
}
void deletebeg()
{
    struct node *ptr;
    if(head==NULL)
    {
        printf("\nUNDERFLOW");
    }
}