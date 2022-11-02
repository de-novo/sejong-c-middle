

//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//

//소인수분해


#include <stdio.h>
void six5add3() {
    int N;
    scanf("%d",&N);
    int R = 0;
    while(1){
       int k = N%10;
       N/=10;
       if(k==N){
           N = 0;
           break;
       }
        if(k==0){
            continue;
        }
       R= R*10+k;
    }
    while (1){
        int k=R%10;
        N=N*10+k;

        if(k==R){
            break;
        }
        R/=10;
    }

    printf("%d",N*N);

}

