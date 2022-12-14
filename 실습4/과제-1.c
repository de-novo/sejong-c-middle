//
// Created by denovo on 2022/09/14.
//
#include <stdio.h>
//[ 문제 1 ] 양의 정수 한 개를 입력 받는다. 입력 받은 수가 3의 배수인 경우에는 3의 배수임을
//출력하고 5의 배수인 경우에는 5의 배수임을 출력하고 15의 배수인 경우에는 15의 배수임을 출력한다. 만약 입력 받은 수가 3, 5, 15의 배수가 아닌 경우에는 입력받은 수를 그대로 출력한다. 출력문은 아래의 출력 예시와 같은 영어 형식으로 출력한다. - 힌트: 논리 연산자(&&), 논리 부정 연산자(!), 산술 연산자(곱셈, 덧셈, 나머지), 괄호를 이용하시오.

void four1T(){
    int N ;
    scanf("%d",&N);

    // 어떤수의 배수인지를 저장할 변수를 선언한다.
    // 처음엔 15의 배수인지를 확인하고, 이어서 5, 3순서로 확인한다.
    // 15, 5, 3 모두 아닐시 N값을 저장한다.
    int multiple = N%15==0?15:N%5==0?5:N%3==0?3:N;

    printf("%d is a multiple of %d.",N,multiple);

    return;
}