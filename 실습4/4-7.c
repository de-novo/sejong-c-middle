//
// Created by denovo on 2022/09/08.
//
#include <stdio.h>

//4장5절 [ 문제 7 ] 문자 한 개를 입력 받고 입력 받은 문자가 알파벳인지 아닌지 판단하는 프로그램을 작성하시오. - 알파벳이면 1, 알파벳이 아니면 0을 출력하시오. 입력 예시 1 출력 예시 1
//K 1
//입력 예시 2 출력 예시 2
//= 0
//입력 예시 3 출력 예시 3
//s 1
int four7(){

    // 65
    // 122
    char a;

    scanf("%c",&a);


    int result = (a>=65 && a<=122) ? 1 : 0;
    printf("%d",result);


    return 0;
}