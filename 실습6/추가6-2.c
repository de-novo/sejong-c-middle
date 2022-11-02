//
// Created by denovo on 2022/10/05.
//

#include <stdio.h>
void six2add() {

    while (1) {
        int n;

        scanf("%d", &n);


        if (n == 0) {
            break;
        }

        for (int i = 1; i <= n; i++) {

            if (n % i == 0) {
                printf("%d ", i);
            }
        }

        printf("\n");


    }
}

