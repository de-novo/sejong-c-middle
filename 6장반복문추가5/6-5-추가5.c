

//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//


#include <stdio.h>
void six5add5() {
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n;i++){

        for(int j=1; j<=n+1-i;j++){

            printf("%d ", j+(i-1)*2+j-1);
        }
        printf("\n");


    }

}



