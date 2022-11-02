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
void six4add2() {
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){

        for(int j = 1; j<=2*n-1;j++){
            if(j-i>=n||n>=j+i){
                printf(" ");
            } else{
                printf("%d",j>=n?j%n+1:n-j+1);
            }
        }
        printf("\n");

    }
}

