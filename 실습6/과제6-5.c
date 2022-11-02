//
// Created by denovo on 2022/09/29.
//
#include <stdio.h>

void six5T(){
    //역수를 구할 수를 입력받는다
    int n;

    scanf("%d",&n);
    // 짝수의 역수를 받을 변수를 선언한다.
    int e=0;

    // 홀수의 역수를 받을 변수를 선언한다
    int o=0;

    //반복문을 이용하여 각 자리를 구한다.
    while (1){
        //현재 수의 1의자리수를 구한다
        int m = n%10;

        //역수를 구한다
        if(m%2==0){
            e = e*10+m;
        } else{
            o = o*10+m;
        }

        if(m==n){
            break;
        }
        n/=10;


    }

    printf("%d %d",e,o);



}