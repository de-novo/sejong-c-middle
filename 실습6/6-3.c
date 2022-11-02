//
// Created by denovo on 2022/09/26.
//


#include <stdio.h>



void six3(){
    int N;
    scanf("%d",&N);

    int a;
    int c=0;
    while (N!=a){
        scanf("%d",&a);

        if(a>N){
            printf("%d>?\n",a);
        } else if(a<N){
            printf("%d<?\n",a);
        }
        c++;

    }
    printf("%d==\n",a);
    printf("%d\n",c);

    return;

}