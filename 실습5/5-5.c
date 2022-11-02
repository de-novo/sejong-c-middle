//
// Created by denovo on 2022/09/14.
//
#include <stdio.h>
//[ 문제 5 ] 양의 정수를 하나 입력 받아, 2, 3, 5 중 어떤 수에 의해 나누어떨어지는 지에
//따라 해당 알파벳을 출력한다. 경우 출력
//① 입력된 정수가 2, 3, 5 모두로 나누어 떨어지는 경우 A
//② 입력된 정수가 2, 3 으로만 떨어지는 경우 B
//③ 입력된 정수가 2, 5 로만 나누어 떨어지는 경우 C
//④ 입력된 정수가 3, 5 로만 나누어 떨어지는 경우 D
//⑤ 입력된 정수가 2, 3, 5 중 하나로만 나누어 떨어지는 경우 E
//⑥ 입력된 정수가 2, 3, 5 중 어느 수로 나누어도 떨어지지 않는 경우

void five5(){
int N;
    scanf("%d",&N);

    int q = N%2;
    int w = N%3;
    int e = N%5;

    if(q==0&&w==0&&e==0){
        printf("A");
    } else if(q==0&&w==0&&e!=0){
        printf("B");
    }else if(q==0&&w!=0&&e==0){
        printf("C");
    }else if(q!=0&&w==0&&e==0){
        printf("D");
    }else if(q==0||w==0||e==0 ){
        printf("E");
    } else{
        printf("N");
    }

    return;
}