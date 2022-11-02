//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//

#include <stdio.h>
void six7add() {
    int n ;
    scanf("%d",&n);
    int k = 0;
    while (1){
        int q = n%10;
         k= k*10+q;
        if(q==n){
            break;
        }
        n/=10;
    }
    printf("%d",k*k);
}

