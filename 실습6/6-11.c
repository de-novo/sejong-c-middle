//
// Created by denovo on 2022/09/27.
//
#include <stdio.h>
void six11() {

    int N;

    scanf("%d", &N);
    for (int i=1;i<=6;i++){
        for (int j=1;j<=6;j++){
            for (int k=1;k<=6;k++){
                if(i+j+k==N){
                    printf("%d %d %d\n",i,j,k);
                }
            }
        }
    }
}

