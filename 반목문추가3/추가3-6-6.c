

//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//

//소인수분해


#include <stdio.h>
void six6add3() {
    int N2;
    scanf("%d",&N2);
    int N10=0;
    int C=1;

    while (1){
        int k=N2%10;
        if(k==1){
            N10+=C;
        }
        if(N2==k){
            break;
        }
        N2/=10;
        C*=2;
    }
    printf("%d",N10);

}

