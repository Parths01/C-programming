#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int power;
    int coeff;
    struct node *next;
}node;
node * insert(node *head,int power,int coeff);
node * create();
node * padd(node *head1,node *head2);
void display(nodde *head);
int main()
{
    node *head1,*head2,*head3;
    int op;
    int value,x;
    head1=create();
    head2=create();
    printf("First Polynomial is");
    display(head1);
    printf("\n Second Polynmial is");
    display(head2);
    printf("\n addition is");
    head3=padd(head1,head2);
    display(head3);
    p=(node*)malloc(sizeof(node));
    p->power=power;
    p->coeff=coeff;
    p->next=NULL;
    if(head==NULL)
    return(p);
    else
    if(power>head->power)
    {
        p->next=head;
        return(p);
    }
    else
    {
        q=head;
        while(q->next!=NULL&&power<=q->next->power)
    }
}