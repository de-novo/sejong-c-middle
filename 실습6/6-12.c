//
// Created by denovo on 2022/09/27.
//
#include <stdio.h>
void six12() {

    int N;
    int sum=0 ;
    scanf("%d", &N);
    for (;;){
        sum+=N;

        N-=1;
        if(N==0){
            break;
        }
    }
    printf("%d",sum);
}
