//
// Created by denovo on 2022/09/14.
//
//5장5절 [ 문제 12 ] 음료의 종류를 나타내는 1~3사이 정수 N과 투입한 금액을 나타내는 양의 정수 M(100의 배수라고 가정)을 입력 받고,
// 예시와 같이 선택한 음료의 이름과 잔돈의 개수를 출력하는 프로그램을 작성하시오.
// - 잔돈은 500원과 100원짜리만 있고, 100원짜리를 5개 이상 주는 경우는 없다고 가정하라.
// - 잔돈의 개수는 500원짜리, 100원짜리 순으로 공백을 사이에 두고 출력한다. ① Americano (\500) ② Cafe Latte (\400) ③ Lemon Tea (\300)
// - if문을 사용하는 방법과 switch문을 사용하는 방법 등 두 가지 방법을 사용하여 프로그램을 작성하시오. OJ 14번에 제출
#include <stdio.h>



void five12(){

    char A[]="Americano";
    char C[]="Cafe Latte";
    char L[]="Lemon Tea";

    int N,M;
    int coin500,coin100;
    scanf("%d",&N);

    scanf("%d",&M);
    if(N==1){
        M-=500;
        coin500=M/500;
        M%=500;
        coin100=M/100;
        printf("%s\n",A);
        printf("%d %d",coin500,coin100);
    } else if(N==2){
        M-=400;

        coin500=M/500;
        M%=500;
        coin100=M/100;
        printf("%s\n",C);
        printf("%d %d",coin500,coin100);
    } else{
        M-=300;

        coin500=M/500;
        M%=500;
        coin100=M/100;
        printf("%s\n",L);
        printf("%d %d",coin500,coin100);
    }





    return;
}