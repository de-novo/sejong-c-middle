

//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//

//*==42
//a ==97

#include <stdio.h>
void six5add4() {
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
//            printf(" %d",n*(i)-(j-1));
////
            if(i%2==0){
                printf(" %d",n*(i)-(j-1));
            } else{
                printf(" %d",n*(i-1)+j);

//
            }

        }
        printf("\n");

    }
}


