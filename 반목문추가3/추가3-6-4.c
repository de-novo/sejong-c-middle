

//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//

//소인수분해


#include <stdio.h>
void six4add3() {

    while(1){
        int N;
        int sum = 0;
        scanf("%d",&N);

        while (1){
             int k = N%10;
            sum +=k;
            if(k==N){
                 break;
             }
             N/=10;
        }
        printf("%d \n",sum);
        if(sum<=10){
            break;
        }
    }


}

