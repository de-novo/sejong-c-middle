//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//

#include <stdio.h>
void six4add() {
    int N;
    scanf("%d",&N);

    int now;
    int prev ;
    int sum = 0;


    for (int i =0; i<N;i++){
        scanf("%d",&now);

        if(i !=0){
            sum = now +prev;
            printf("%d",sum);
            printf("\n");

        }
        prev=now;
    }

}

