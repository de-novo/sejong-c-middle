//
// Created by denovo on 2022/09/14.
//[ 문제 5 ] 세 자리 양의 정수 한 개를 입력 받아 각 자리수 중에서 최소값을 찾아 출력하시오. 각 자리수는 서로 다르다고 가정한다. - 힌트: 관계연산자( a>b )와 논리연산자( && )와 괄호를 이용하시오. - if문등 배우지 않은 문법 사용금지
#include <stdio.h>
void four5T(){
    int N;
    scanf("%d",&N);

    //각 자리수를 저장할 변수를 선언한다.
    int a,b,c;

    // a 는 백의 자리 , b는 10의 자리수, c는 1의 자리수를 저장한다.
    a = N/100;
    N = N%100;
    b = N/10;
    N = N%10;
    c = N;

    //최소값을 저장할 min을 a로 초기화한다.
    int min = a;
    //min과 b를 비교하고 b가 더작을시 min에 저장한다.
    min>b?min=b:min;

    //min과 c를 비교하고 c가 더작을시 min에 저장한다.
    min>c?min=c:min;

    printf("%d",min);
    return;
}