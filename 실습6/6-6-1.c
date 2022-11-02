//
// Created by denovo on 2022/09/27.
//


#include <stdio.h>


void six6_1(){

    int N;
    scanf("%d",&N);

        for(int i = 1 ; i<=N ; i++){
            for(int j =1; j<=2*N; j++){
                if(j%2!=0){
                    printf(" ");
                } else if(i*2==j||2*N+2==2*i+j){
                    printf("X");
                }
                else{
                    printf("O");
                }
            }
            printf("\n");
        }




}

//
// 1,2 1,18
// 2,4 2,16
// 3,6 3,14
//     4,12
//     5,10
//



//     8,4
//     9,2
//
//
//
//
//
//
//
//
//
//
//
//
//
//
// d
