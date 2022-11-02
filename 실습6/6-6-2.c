//
// Created by denovo on 2022/09/27.
//


#include <stdio.h>


void six6_2(){


    int n;

    scanf("%d",&n);

    for(int i = 1; i<=n;i++){


        for(int j =1; j<=2*n;j++){


            if(j%2==1){
                printf(" ");
            } else{


                printf("%d",(j/2+n*(i-1))%10);
            }

        }
        printf("\n");
    }




};

/*
 *
 * 1,2 (1)
 * 1,4 (2)
 * 1,6 (3)
 * 1,8 (4)
 * 1,10 (5)
 * 1, 12 (6)
 *
 * 2,2 (7)
 * 2,4 (8)
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 * */