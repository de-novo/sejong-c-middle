//
// Created by denovo on 2022/09/26.
//

#include <stdio.h>


void six5_4() {

    int N;

    scanf("%d", &N);


    for (int i = N; i >= 1; i--) {
        for (int j = 1; 2*i-1>=j;j++) {

            printf("*");
        }
        printf("\n");
    }

    return;
}