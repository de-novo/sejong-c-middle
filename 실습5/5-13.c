//
// Created by denovo on 2022/09/14.
//
#include <stdio.h>
void five13(){
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    double grade = (double)(a+b+c)/3;

    printf("%0.2lf\n",grade);
    if(grade>=75){
        printf("A");
    } else if( 50<=grade && grade<75 ){
        printf("B");
    } else if (grade<50){
        printf("F");
    }


}