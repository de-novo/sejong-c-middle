//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//

#include <stdio.h>
void six1add3() {
    int N,M;
    scanf("%d %d",&N,&M);

    for(int i = N ; i<=M; i++){

        for(int j = 2; j<=i;j++){
            if(i%j==0&&i!=j){
                break;
            } else if(i==j){
                printf(" %d",i);

            }


        }


    }

}

