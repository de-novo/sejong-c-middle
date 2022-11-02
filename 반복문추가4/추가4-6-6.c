

//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//

//*==42
//a ==97

#include <stdio.h>
void six6add4() {
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n*2)-1;j++){
            if(i>j||n*2<j+i){

                printf("~");

            } else{
                printf("*");



            }



        }
        printf("\n");

    }

}



