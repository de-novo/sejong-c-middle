//
// Created by denovo on 2022/09/27.
//[ 문제 9-1 ] 하나의 양의 정수 N을 입력 받아, N에서 숫자 3이 총 몇 번 나타나는지를 출력하는
//프로그램 작성하시오.
// - N=33 일 때, 2개의 3이 나타난다. 입력 예시 1 출력 예시 1
//131 1
//입력 예시 2 출력 예시 2
//303 2
//입력 예시 3 출력 예시 3
//31323 3
#include <stdio.h>


void six9_1() {

    int N;

    scanf("%d", &N);
    int c = 0;
    while (1){
        int th = N%10;
        if(th==3){
            c++;
        }
        if(th==N){
            break;
        }
        N=N/10 ;
//        printf("%d\n",N);
    }
    printf("%d",c);
}