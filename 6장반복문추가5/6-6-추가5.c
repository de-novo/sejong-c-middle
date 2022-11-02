

//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//


#include <stdio.h>
void six6add5() {
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n;i++){

        for(int j=1; j<=i;j++){
            if(i==1|i==n|j==i|j==1){
                printf("*");
            } else{
                printf(" ");
            }


        }
        printf("\n");


    }

}



