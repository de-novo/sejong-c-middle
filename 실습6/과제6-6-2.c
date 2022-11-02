//
// Created by denovo on 2022/09/28.
//

#include <stdio.h>
void six6_2T() {
    while (1){
        int n;
        scanf("%d",&n);
        if(n%3==0||n<=0){
            break;
        }
        for(int i=1; i<=n;i++){
            for(int j=1; j<=n*2-1;j++){
                if(n-i+1>j || n+i-1<j){
                    printf(" ");
                } else{
                    if(n-i+1==j||n+i-1==j||i==n){
                        printf("X");

                    }else{
                        printf("O");
                    }
                }


            }
            printf("\n");

        }



    }


}
//n=3
// i=1    j=1
// 1,1 1,2    //1,3
//2,2 2,3 2,4
//3,1 3,2 3,3 3,4 4,5
