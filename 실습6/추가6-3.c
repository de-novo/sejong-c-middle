//
// Created by denovo on 2022/10/05.
//

#include <stdio.h>
void six3add() {

    while (1) {
        int n;

        scanf("%d", &n);


        if (n == 0) {
            break;
        }
        int p = 1;
        for (int i = 1; i <= n; i++) {

          p*=i;
        }

        printf("%d \n",p);


    }
}

