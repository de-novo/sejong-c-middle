//
// Created by denovo on 2022/09/14.
//
//연도와 월, 일을 yyyy/mm/dd 형태로 두 번 입력 받아, 둘 중 더 빠른 연월일을 yyyy/mm/dd 형태로 출력하는 프로그램을 작성 하시오.
// 두 입력 값이 같은 경우에는 입력 값을 출력하고 *를 출력한다.
// - 중첩된 if-elseif-else문을 사용하는 방법과 단일 if-elseif-else문을 사용하는 방법 등 두 가지 방법을 사용하여 프로그램을 작성하시오.
#include <stdio.h>

void five9(){
    int y1,m1,d1,y2,m2,d2;

    scanf("%d/%02d/%02d",&y1,&m1,&d1);
    scanf("%d/%02d/%02d",&y2,&m2,&d2);

    int year1 = y1*10000+m1*100+d1;
    int year2 = y2*10000+m2*100+d2;


    if(year1<year2){
        printf("%d/%02d/%02d",y1,m1,d1);
    } else if (year1>year2){
        printf("%d/%02d/%02d",y2,m2,d2);
    } else{

        printf("%d/%02d/%02d\*",y2,m2,d2);

    }

    return;
}