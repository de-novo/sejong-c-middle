//
// Created by denovo on 2022/09/14.
//
#include <stdio.h>

void five6(){

    int a ,b,c ;
    scanf("%d %d %d",&a,&b,&c);

    int big =0;
    int small=0;

    big = a;
    b>big? big=b : big;
    c>big? big=c : big;

    small =a;
    b<small? small=b : small;
    c<small? small=c : small;

    printf("%d %d",big,small);

    return;
}