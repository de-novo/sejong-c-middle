//
// Created by denovo on 2022/09/21.
//
#include <stdio.h>
void five5T(){
    //숫자를 입력받을 N을 선언한다.
    int N;
    scanf("%d",&N);

    //앞 세자리수의 규칙에 대한 조건을 처리해준다.
    if(N%100==0 && N/1000==10){
        int rn =(N/100)%100;
        //지역번호에 따라 조건처리를 해준다.
        if(rn==0){
            printf("Seoul");

        }
        else if(rn==1){

            printf("Seoul");

        } else if(rn==2){

            printf("Seoul");

        }
        else if(rn==3){
            printf("Busan");

        }
        else if(rn==4){
            printf("Busan");

        }
        else if(rn==5){
            printf("Gwangju");

        } else{

            printf("none");
        }
    } else{
//나머지는 none을 처리해준다.
        printf("none");
    }

    return;
}