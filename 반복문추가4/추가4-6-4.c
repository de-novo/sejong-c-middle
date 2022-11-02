

//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//

//*==42
//a ==97

#include <stdio.h>
void six4add4() {
    int sum = 0;
    int prev_sum = 0;
    while (1){
        int n;
        scanf("%d",&n);
        prev_sum=sum;
        sum +=n;
        if(sum>20){
            printf(" %d",prev_sum);
            sum=n;
        }



        if(n<=0){
            printf(" %d",prev_sum);
            break;
        }
    }
}


