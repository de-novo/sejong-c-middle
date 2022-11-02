//
// Created by denovo on 2022/09/14.
//
#include <stdio.h>
//[ 문제 3 ] 5개의 정수를 입력 받아, 양수인 수들의 합을 구하는 프로그램을 작성하시오
void five3(){
    int a,b,c,d,e;

    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);


    int sum=0;
    if(a>0){
    sum+=a;

    }
    if(b>0){
        sum+=b;

    }
    if(c>0){
        sum+=c;

    }
    if(d>0){
        sum+=d;

    }
    if(e>0){
        sum+=e;

    }

    printf("%d ",sum);


    return;
}