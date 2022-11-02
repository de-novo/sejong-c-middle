//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//

#include <stdio.h>
void six2add2() {
    int now=1;
    int cnt=0;
    int prev =1;
    while (1){
        int n ;
        scanf("%d",&n);
        if(n==0){
            break;
        }
        if(n>0){
            now = n/n;
        } else{
            now = -n/n;
        }


        if(n>0&&now!=prev){
            prev=now;
            cnt++;
            printf("\n");
        } else if(n<0&&now!=prev){
            prev=now;
            cnt++;
            printf("\n");
        }
        printf("%d ",n);

    }
    printf("\ncount = %d",cnt);
}

