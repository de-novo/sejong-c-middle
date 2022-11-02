//
// Created by denovo on 2022/09/14.
//
#include <stdio.h>
//5장4절 [ 문제 8 ] 연도를 나타내는 양의 정수 N을 입력 받아, 윤년인지 평년인지 출력하는 프로그램을 작성하시오.
// - 윤년에 대한 규칙은 다음과 같다.
// 1) 연도가 4로 나누어떨어지면 윤년이다. (leap year)
// 2) 1)의 조건을 만족해도, 100으로 나누어떨어지면 평년이다. (common year)
// 3) 2)의 조건을 만족해도, 400으로 나누어떨어지면 윤년이다. (leap year)
// - 코딩하기 전에 먼저 순서도를 그린다.
void five8(){
    int N ;
    scanf("%d", &N);
    if(N%4==0){
        if(N%100==0){
            if(N%400==0){
                printf("leap year");


            } else{
                printf("common year");

            }


        } else{

            printf("leap year");

        }

    } else{
        printf("common year");
    }

    return;
}