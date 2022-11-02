

//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//


#include <stdio.h>
void six3add5() {
    int sum = 0;

    while (1){
        int n,m;
        scanf("%d %d",&n,&m);
        int q=n;
        if(n==0|m==0){
            printf("%d", sum);

            break;
        }

        for (int i = 1; i<=m-1 ;i++){
            q*=n;
        }

        sum+=q;

    }

}



