#include<stdio.h>
int main(){

    int s1,s2,s3;
    printf("Enter three student marks");
    scanf("%d %d %d",s1,s2,s3);

    float avg = s1+s2+s3/3.0;
    printf("%d",avg);

    return 0;

}