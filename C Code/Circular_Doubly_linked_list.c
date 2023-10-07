#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    struct node *next;
    int data;
};
struct node *head;
void insertbeg();
void insertlast();
void deletebeg();
void deletelast();
void display();
void search();
void main()
{
    int choice = 0;
    while(choice!=8)
    {
        printf("\n Main Menu  \n");
        printf("\n choose one optinon from the following list...\n");
        printf("\n1.Insert in beginning\n2.Insert in last\n3.Delete from beginning\n4.Delete from last\n5.Search\n6.Display\n7.Exit\n");
        printf("\nEnter your choice?\n");
        scanf("\n%d",&choice);
        switch(choice)
        {
            case 1 :
            insertbeg();
            break;
            case 2 :
            insertlast();
            break;
            case 3 :
            deletebeg();
            break;
            case 4 :
            deletelast();
            break;
            case 5 :
            search();
            break;
            case 6 :
            display();
            break;
            case 7 :
            exit(0);
            break;
            default :
            printf("Please Enter valid choice..");
        }
    }
}
void insertbeg()
{
    struct node *ptr,*temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\n Enter item valuse");
        scanf("%d",&item);
        if(head == NULL)
        {
            head = ptr;
            ptr->next=head;
            ptr->prev=head;
        }
        else
        {
            temp = head;
            while(temp->next!=head)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->prev=temp;
            head->prev=ptr;
            ptr->next=head;
            head= ptr;
        }
        printf("\n Node inserted\n");
    }
}
void  insertlast()
{
    struct node *ptr,*temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nOVERFLOE\n");
    }
    else
    {
        printf("\nEnter value");
        scanf("%d",&item);
        ptr->data=item;
        if(head == NULL)
        {
            head=ptr;
            ptr->next=head;
            ptr->prev=head;
        }
        else
        {
            temp=head;
            while(temp->next!=head)
            {
                temp = temp->next;
            }
            temp->next=ptr;
            ptr->prev=temp;
            head->prev=temp;
            ptr->next=head;
        }
    }
    printf("\nNode insertde\n");
}
void deletebeg()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("\n UNDERFLOW");
    }
    else if(head->next == head)
    {
        head = NULL;
        free(head);
        printf("\n Node deleted\n");
    }
    else
    {
        temp = head;
        while(temp ->next!=head)
        {
            temp =temp ->next;
        }
        temp->next=head=head->next;
        head->next->prev=temp;
        free(head);
        head=temp->next;
    }
}
void deletelast()
{
    struct node *ptr;
    if(head == NULL)
    {
        printf("\nUNDERFLOW");
    }
    else if(head->next == head)
    {
        head=NULL;
        free(head);
        printf("\n Node deleted\n");
    }
    else
    {
        ptr=head;
        if(ptr->next!=head)
        {
            ptr=ptr->next;
        }
        ptr->prev->next=head;
        head->prev=ptr->prev;
        free(ptr);
        printf("\nnode deleted\n");
    }
}
void display()
{
    struct  node *ptr;
    ptr = head;
    if(head == NULL)
    {
        printf("\nnothing to print");
    }
    else
    {
        printf("\nPrinting values...\n");
        while(ptr->next!=head)
        {
            printf("%d\n",ptr->data);
            ptr = ptr->next;
        }
        printf("%d\n",ptr->data);
    }
}
void search()
{
    struct node *ptr;
    int n,i=0,flag=1;
    ptr=head;
    if(ptr == NULL)
    {
        printf("\n Empty list\n");
    }
    else
    {
        printf("\nEnter element which you want to search?\n");
        scanf("%d",&n);
        if(head->data==n)
        {
            printf("no. found at location %d",i+1);
            flag=0;
        }
        else 
        {
            while(ptr->data==n)
            {
                if(ptr->data==n)
                {
                    printf("no.found at location %d",i+1);
                    flag=0;
                    break;
                }
                else
                {
                    flag=1;
                }
                i++;
                ptr=ptr->next;
            }
        }
        if(flag!=0)
        {
            printf("no.not  found\n");
        }
        
    }
}