//
// Created by denovo on 2022/09/14.
//
#include <stdio.h>
//5장4절 [ 문제 4 ] 문자 한 개를 입력 받고, 다음을 출력하는 프로그램을 작성하시오.
// - 영어 대문자는 소문자로, 소문자는 대문자로 출력한다.
// - 입력 값이 영문자가 아닌 경우 "none" 을 출력한다.
void five4(){
    int a; // a-z97~122 A-Z 65-90
    scanf("%c",&a);
    if(97<=a && a<=122){
        a-=32;
    } else if(65<=a && a<=90){

        a+=32;
    } else{
        a = 0;
    }
a==0? printf("none"): printf("%c",a);
    return;
}