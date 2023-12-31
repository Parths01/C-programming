#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void insertbeg ();
void insertlast ();
void deletebeg();
void deletelast();
void display();
void search();
void main ()
{
    int choice;
    while(choice!=5)
    {
        printf("\n  main menu   \n");
        printf("\n choose one option from the following list \n");
        printf("\n====================\n");
        printf("\n 1 . Insert in begining\n 2 . Insert at last\n 3 . deletebeg \n 4 . deletelast\n 5 . search \n 6 . display \n  7 . Exit\n");
        printf("\n Enter your choice ?\n");
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
            default:
            printf("Please enter valid choice ");
            break;
        }
    }
}
void insertbeg()
{
    struct node *ptr,*temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("\n OVERFLOW");
    }
    else
    {
        printf("\nEnter the node data?");
        scanf("%d",&item);
        ptr->data=item;
        if(head == NULL)
        {
            head = ptr;
            ptr->next=head;
        }
        else
        {
            temp=head;
            while(temp->next!=head)
            temp=temp->next;
            ptr->next=head;
            temp->next=ptr;
            head=ptr;
        }
        printf("\n node insert\n");
    }
}
void insertlast()
{
    struct node *ptr,*temp;
    int item;
    ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr== NULL)
        {
            printf("\n OVERFLOW");
        }
        else
        {
            printf("\nEnter Data ?");
            scanf("%d",&item);
            ptr->data=item;
            if(head==NULL)
            {
                head=ptr;
                ptr->next=head;
            }
            else
            {
                temp = head;
                while(temp->next!=head)
                {
                    temp=temp->next;
                }
                temp->next=ptr;
                ptr->next=head;
            }
            printf("\n node inserted \n");
        }
}
void deletebeg()
{
    struct node *ptr;
    if(head == NULL)
    {
        printf("\nUNDERFLOW");
    }
    else if(head->next==head)
    {
        head = NULL;
        free(head);
        printf("\nNode deleted\n");
    }
    else
    {
        ptr = head;
        while(ptr->next!=head)
        ptr=ptr->next;
        ptr->next=head->next;
        free(head);
        head = ptr->next;
        printf("\nnodde deleted\n");
    }
}
void deletelast()
{
    struct node *ptr,*prev;
    if(head == NULL)
    {
        printf("\nUNDERFLOW\n");
    }
    else if(head->next == head)
    {
        head=NULL;
        free(head);
        printf("\nnode delete\n");
    }
    else
    {
        ptr=head;
        while(ptr->next!=head)
        {
            prev=ptr;
            ptr=ptr->next;
        }
        prev->next=ptr->next;
        free(ptr);
        printf("\nnode delete\n");
    }
}
void search()
{
    struct node *ptr;
    int item,i=0,flag=1;
    ptr=head;
    if(ptr == NULL)
    {
        printf("\n Enter List \n");
    }
    else
    {
        printf("\n Enetr item which you want to search?\n");
        scanf("%d",&item);
        if(head->data==item)
        {
            printf("item found at location %d",i+1);
            flag=0;
        }
        else
        {
            while(ptr->next!=head)
            {
                if(ptr->data==item)
                {
                    printf("item found at location %d",i+1);
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
            printf("Item not found");
        }
    }
}
void display()
{
    struct node *ptr;
    ptr=head;
    if(head==NULL)
    {
        printf("\n Nothing to print");
    }
    else
    {
        printf("\n printing values \n");
        while(ptr->next!=head)
        {
            printf("%d\n",ptr->data);
            ptr=ptr->next;
        }
        printf("%d\n",ptr->data);
    }
}