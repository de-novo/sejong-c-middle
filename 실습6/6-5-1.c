//
// Created by denovo on 2022/09/26.
//

#include <stdio.h>


void six5_1(){

    int N;

    scanf("%d",&N);


    for(int i=1;i<=N;i++){
        for(int j=1;j<= i;j++){

            printf("*");
        }
        printf("\n");
    }

    return;
}