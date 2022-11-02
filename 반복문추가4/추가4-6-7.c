

//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//


#include <stdio.h>
void six7add4() {
    int n,m;
    scanf("%d %d",&n,&m);

    for(int i=1;i<=6;i++){
        for(int j=1;j<=6;j++){
            for(int k=1;k<=6;k++){
                int sum = i+j+k;

                if(n<=sum&&sum<=m){
                    printf("%d %d %d\n",i,j,k);
                }

            }



        }
    }

}



