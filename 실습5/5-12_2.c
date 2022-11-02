//
// Created by denovo on 2022/09/14.
//

#include <stdio.h>

void five12_2(){

    char A[]="Americano";
    char C[]="Cafe Latte";
    char L[]="Lemon Tea";
    int N,M;
    int coin500,coin100;
    scanf("%d",&N);
    scanf("%d",&M);
    switch (N) {
        case 1: {
            M -= 500;
            coin500 = M / 500;
            M %= 500;
            coin100 = M / 100;
            printf("%s\n", A);
            printf("%d %d", coin500, coin100);
            break;
        }
        case  2:{
            M-=400;

            coin500=M/500;
            M%=500;
            coin100=M/100;
            printf("%s\n",C);
            printf("%d %d",coin500,coin100);
            break;

        }
        case 3:{
            M-=300;

            coin500=M/500;
            M%=500;
            coin100=M/100;
            printf("%s\n",L);
            printf("%d %d",coin500,coin100);
            break;

        }
    }

    return;
}