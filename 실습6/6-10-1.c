//
// Created by denovo on 2022/09/27.
//[ 문제 10-1 ] 10이상의 양의 정수 N을 입력 받아 각 자리수의 합을 출력하는 프로그램을 작성하시오. - 예) 6234 à 6+2+3+4=15

#include <stdio.h>
void six10_1() {

    int N;

    scanf("%d", &N);
    int c = 0;
    while (1){
        int th = N%10;
        c+=th;

        if(th==N){
            break;
        }

        N=N/10 ;
//      printf("%d\n",N);
    }
      printf("%d\n",c);

}

