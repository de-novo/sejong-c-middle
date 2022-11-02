//
// Created by denovo on 2022/09/08.
//
#include <stdio.h>

//4장6절 [ 문제 8 ] 양의 정수 N을 입력 받아 짝수면 “even”, 홀수면 “odd”를 출력하는 프로그램을
//        작성하시오. - 조건 연산자 이용
int four8(){

    int N ;
    scanf("%d",&N);


    char even[]="even";
    char odd[]="odd";

    printf("%s\n",N%2==0?even:odd);

    return 0;


}