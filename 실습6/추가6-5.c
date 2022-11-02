//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//

#include <stdio.h>
void six5add() {

    while (1){
        int n,m;

        scanf("%d %d",&n,&m);

        if(n==0||m==0){
            break;
        }
        int a;
        for(int i =1 ; i<=n; i++ ){
            if(n%i==0&&m%i==0){
                a=i;
            }

        }
        printf("%d\n",a);
    }

}

