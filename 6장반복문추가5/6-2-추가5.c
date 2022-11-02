

//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//


#include <stdio.h>
void six2add5() {

    while (1){
        int n,m,a;

        scanf("%d %d %d",&n,&m,&a);

        if(n-m==0|n-a==0|m-a==0){
            break;
        }
        int big = n;
        int small = n;
        if(big<a){
            big =a;
        }
        if(big<m){
            big =m ;
        }
        if(small>m){
            small=m;
        }
        if(small>a){
            small=a;
        }
        printf("%d %d",big,small);



    }
}



