//
// Created by denovo on 2022/09/07.
//
#include <stdio.h>
//총 세 상품의 가격을 입력 받고, 다음과 같이 오른쪽 끝의 위치가 동일하도록 자리 맞추어
//출력하시오. 아래 내용에 따라 작성하시오. ◦ 가격 단위는 won 이며, 1만원 미만의 가격이어야 한다.
int three4(){
    int a,b,c,num;

    scanf("%d %d %d",&a,&b,&c);
    printf("purchase 1: %4.0d won\n",a);
    printf("purchase 2: %4.0d won\n",b);
    printf("purchase 3: %4.0d won\n",c);
    return 0;

}