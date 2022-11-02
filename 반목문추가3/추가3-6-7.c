

//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//

//소인수분해


#include <stdio.h>
void six7add3() {
    int N10;
    scanf("%d",&N10);
    int N2=0;
    int C=1;

    while (1){
        int k=N10%2;
        if(k!=0){
            N2+=C;
        }
        if(N10==k){
            break;
        }
        N10/=2;
        C*=10;
    }
    printf("%d",N2);

}

