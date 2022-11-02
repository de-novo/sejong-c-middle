

//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//

//소인수분해


#include <stdio.h>
void six8add3() {
    int enve_sum=0;
    int t=0;
    while(1){
        int N;

        scanf("%d",&N);
        if(N<=0){
            break;
        }
        if(t==1){
            enve_sum+=N;
        }
        if(N%2==0){
            t=1;
        }else{
            t=0;
        }
    }
    printf("%d",enve_sum);


}

