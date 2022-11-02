//
// Created by denovo on 2022/09/27.
//
//
// Created by denovo on 2022/09/27.
//6장5절 [ 문제 10 ] 10이상의 양의 정수 N을 입력 받아 디지털근을 출력하는 프로그램을 작성하시오. N의 각 자리수를 더한다. 한 자리 수가 될 때까지 반복한다. - 디지털근, 예) 6234 à 6+2+3+4 = 15 à 1+5 = 6
// 예) 52561 à 5+2+5+6+1 = 19 à 1+9 = 10 à 1+0 = 1
// - 중첩 while 문 이용해야 해결됩니다.

#include <stdio.h>
void six10() {

    int N;

    scanf("%d", &N);
    int  C = 0 ;
    while (1){
        if(N<10){
            break;
        }
        while (1){
            int th = N%10;
            C+=th;

            if(th==N){
                break;
            }
            N=N/10 ;
        }
//        printf("%d\n",C);
        N= C;
        C = 0;
    }

      printf("%d\n",N);

}

