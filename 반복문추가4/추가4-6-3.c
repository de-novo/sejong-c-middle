

//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//

//*==42
//a ==97

#include <stdio.h>
void six3add4() {
    int n,m;

    scanf("%d %d",&n,&m);

    for(int i=m; i>=1;i--){
//  5 4 3 2 1
        for(int j = i*n; j >i*n-n;j--){
            printf(" %d",j);
        }

        printf("\n");

    }
}

