//
// Created by denovo on 2022/09/08.
//
#include <stdio.h>
#include <math.h>
//4장3절 [ 문제 4 ] 10000~99999사이의 양의 정수 N을 입력 받은 후, 100의 자리에서 반올림 한
//        값을 출력하는 프로그램을 작성하시오.
int four4(){
    int N;
    double num ;
    int result;
    scanf("%d",&N);
    num = N/1000.0;
    num+=0.5;
    result= ((int)num)*1000;
    printf("%d",result);

    return 0;
}