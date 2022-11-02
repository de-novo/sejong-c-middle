//
// Created by denovo on 2022/09/14.
//
#include <stdio.h>

void five13_2(){
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);
    // 평균을 구해준다.
    double grade = (double)(a+b+c)/3;
    // 75점~ 은 A
    // 50~74.99.. 은B
    //나머지는 F
    //스위치문에 조건으로 써줄 변수를 선언후 규칙을 찾아보았다
    // 25의 배수로 끊기기에 그에 맞는 규칙 찾아주었다.
    // (int)(grade/25)의 결과가 4또는 3일시 A
    // 2일시 B
    // 그이하일시 F
    int sw = (int)(grade/25) ==4 ? 4 : (int)(grade/25)==3 ? 3 : (int)(grade/25)==2 ? 2 : (int)(grade/25)==1? 1 : 0;
    printf("%d\n",(int)(grade/25));

    printf("%0.2lf\n",grade);
    switch(sw) {
        case 4:
        case 3:
        {
            printf("A");
            break;
        }
        case 2:
        {
            printf("B");
            break;
        }
        default:{
            printf("F");
            break;
        }

    }





    return;
}