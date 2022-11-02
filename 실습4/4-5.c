//
// Created by denovo on 2022/09/08.
//
#include <stdio.h>
//4장3절 [ 문제 5 ] 원의 둘레 실수 N을 입력 받아 원의 넓이를 구하고 소수 첫째 자리에서 반올림 한 값을 출력하는 프로그램을 작성하시오. - 원주율은 3.14로 계산한다. - 원의 둘레 =2
//- 원의 넓이 =
//2
//입력 예시 1 출력 예시 1
//24.5 48

int four5(){
    double pi = 3.14;

    double round,radius,area ;
    scanf("%lf",&round);

    radius =  round / (pi*2);
    printf("%d",(int)(radius*radius*pi+0.5));


    return 0;
}