//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//

#include <stdio.h>
void six8add() {
    int n ;
    scanf("%d",&n);
    for(int i=1;i<=6;i++){
        for(int j=1;j<=6;j++){
            if((i+j)%n==0){
                printf("%d %d\n",i,j);
            }

        }

    }


}

