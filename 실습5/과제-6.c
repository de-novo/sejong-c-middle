//
// Created by denovo on 2022/09/21.
//
#include <stdio.h>

void five6T(){
    //번호를 입력받을 N을 선언해준다.
    int N;
    scanf("%d",&N);
    // 앞 3자리를 rn에 저장한다.
    int rn =N/100;

    //앞 3자리에해 따른 조건을 switch문으로 처리해준다.
    switch (rn) {
        case 100:{
            printf("Seoul");

            break;
        }
        case 101:{
            printf("Seoul");

            break;
        }
        case 102:{
            printf("Seoul");
            break;
        }
        case 103:{
            printf("Busan");
            break;

        }
        case 104:{
            printf("Busan");
            break;


        }case 105:{
            printf("Gwangju");
            break;


        }
        default:{
            printf("none");
            break;
        }
    }

    return;
}