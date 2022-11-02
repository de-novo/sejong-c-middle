//
// Created by denovo on 2022/09/27.
//
#include <stdio.h>




void six5(){
    int n;

    scanf("%d",&n);

    for(int i =1; i<=n;i++){
        for(int j=1; j<=2*n-1;j++){
            if(n+i>j&&n-i<j) {
                printf("*");
            } else{
                printf(" ");
            }
        }
        printf("\n");

    }


}

/*
 *              1,5
 *          2,4 2,5 2,6
 *      3,3 3,4 3,5 3,6 3,7
 *  4,2 4,3 4,4 4,5 4,6 4,7 4,8
 *
 *
 * */