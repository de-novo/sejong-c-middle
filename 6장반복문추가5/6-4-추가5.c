

//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//


#include <stdio.h>
void six4add5() {
    while (1){
        int n,m;
        scanf("%d %d",&n,&m);

        if(n==0|m==0){
            break;
        }
        int q =n ;


        while (1){
            if(q%m==0&q%n==0){
                break;
            }
            q+=1;
        }
        printf("%d",q);






    }

}



