//
// Created by denovo on 2022/09/28.
//
//
// Created by denovo on 2022/09/27.
//
#include <stdio.h>
void six4pr() {
    int i=0;

    while (1){
        int n ;
        scanf("%d",&n);
        if(i==0) {
            i =n;
        }
        if(n==0){
                break;
            }

        i = n<i?n:i;
    }
    printf("%d",i);
}