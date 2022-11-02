//
// Created by denovo on 2022/09/11.
//
#include <stdio.h>
//4장6절 [ 문제 10 ] 서로 다른 두 양의 정수 N, M을 입력 받아 큰 수에서 작은 수를 나눈 몫과
//나머지를 출력하는 프로그램을 작성하시오. - 입력 : 한 줄에 N, M이 순서대로 입력된다. - 출력 : 몫을 출력한 후 그 다음 줄에 나머지를 출력한다

int four10(){

    int a,b ;
    scanf("%d %d",&a,&b);

    int big = a>b?a:b;
    int small = a>b?b:a;

    printf("%d\n",big/small);
    printf("%d",big%small);

    return 0;
}