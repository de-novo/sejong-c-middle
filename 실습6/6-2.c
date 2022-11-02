//
// Created by denovo on 2022/09/26.
//

#include <stdio.h>

void six2(){
    int N;
    int sum = 0;
    scanf("%d",&N);
    sum+=N;

    while (N!=0){
        scanf("%d",&N);
        sum+=N;
    }
    printf("%d",sum);

    return;
}