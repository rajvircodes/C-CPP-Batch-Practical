#include<stdio.h>
int main(){
    int year;

    printf("Enter year");
    scanf("%d",&year);

    if((year%400==0)|| (year%4==0 && year%100!=0)){
        printf("Given year is leap");
    }else{

        printf("Given year is Not leap Year");
    }

    return 0;
}