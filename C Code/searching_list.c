#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct cities{
    char city[100];
    int code;
};
typedef struct cities cit;
int readfile(cit *);
void display(cit* );
int readflie(cit* arr){
    char cities[30];
    int i=0;
    FILE *fp;
    printf("Enter the file name to be read :\n");
    scanf("%s",&cities);
    fp=fopen(cities,"r");
    if(fp==NULL){
        printf("Error in opening file\n");
        exit(0);
    }
    while(!feof(fp)){
        fscanf(fp,"%d%s",&arr[i].code,arr[i].city);
        i++;
    }
    return i-1;
}