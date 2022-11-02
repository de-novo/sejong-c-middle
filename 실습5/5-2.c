//
// Created by denovo on 2022/09/11.
#include <stdio.h>
//5장3절 [ 문제 2 ] 두 개의 양의 정수 N, M을 입력 받아, 아래 예시와 같이 두 수의 제곱관계를
//출력하는 프로그램을 작성하시오. - 제곱관계가 아닌 경우는 "none" 출력
// - N과 M 사이에 대소 관계는 정해진 바 없다
int five2(){

    int N,M;

    scanf("%d %d",&N,&M);

    int big = N>=M?N:M;
    int small = N>M?M:N;

    if(big == small*small){

        printf("%d*%d=%d",small,small,big);
    } else{
        printf("none");

    }
    return 0;
}