//
// Created by denovo on 2022/09/27.
//
#include <stdio.h>
void six5_3(){

    int N;

    scanf("%d",&N);


    for(int i=1;i<=N;i++){
        for(int j=1;j<= (2*i-1);j++){

            printf("*");
        }
        printf("\n");
    }

    return;
}