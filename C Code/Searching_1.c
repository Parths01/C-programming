#include<stdio.h>
int LinearSearch(int arr[30],int n,int key){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==key){
            printf("%d\n",i);
        }
    }
    if(i == n){
        printf("Element is present");
    }else{
        printf("Element is not present");
    }
}
int main()
{
    int n,key,arr[30];
    printf("Enter the number of the array : ");
    scanf("%d",&n);
    printf("Enter the elements :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be find : ");
    scanf("%d",&key);
    LinearSearch(arr,n,key);
}