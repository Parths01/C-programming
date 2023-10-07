#include<stdio.h>
void linearsearch(int a[],int n,int key);
int main()
{
    int a[10],n,key,i;
    printf("How many element do you want to enter in arry : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\n Enter element %d :",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n Enter the element to be search : ");
    scanf("%d",&key);
    linearsearch(a,n,key);
}
void linearsearch(int a[10],int n,int key)
{
    int i;
    for(i = 0; i < n; i++){
        if(a[i]==key)
        {
            printf(" \n%d Element Found at %d positon",key,i+1);
            break;
        }
    }
    if (i==n)
    printf("\n Item %d not in the list\n",key);
}