//
// Created by denovo on 2022/09/21.
//
//[ 문제 4 ] 두 자리 10진 정수를 입력 받은 후 영어단어로 변환하는 프로그램을 작성하시오. 예)
//45를 입력할 경우 “forty-five”를 출력한다. 단, 입력된 정수가 두 자리 10진 정수가 아닌 경우
//"none"을 출력한다. - 힌트: if문안에 switch문을 사용한다(중첩).
#include <stdio.h>

void five4T(){
    //숫자를 입력받을 n을 선언했다.
    int n ;
    scanf("%d",&n);

    // T에는 10의 자리 수를 저장해준다.
    int T = n/10;
    // N에는 1의 자리 수를 저장해준다.
    int N = n%10;


    // 10~19일때의 규칙은 예외적이기에 따로 처리해준다.
    if(T==1){
        switch (N) {
            case 0:{
                printf("ten");
                break;
            }
            case 1:{
                printf("eleven");
                break;

            }
            case 2:{
                printf("twelve");
                break;

            }
            case 3:{
                printf("thirteen");
                break;
            }
            case 4:{
                printf("fourteen");
                break;
            }
            case 5:{
                printf("fifteen");
                break;
            }
            case 6:{
                printf("sixteen");
                break;
            }
            case 7:{
                printf("seventeen");
                break;
            }
            case 8:{
                printf("eight");
                break;
            }
            case 9:{
                printf("nine");
                break;
            }
            default:{
                break;
            }
        }
    }
    else if( T>1&&T<10){
        //10의 자리수 영어를 출력한다.
        switch (T) {
            case 0:{

                break;
            }
            case 1:{

                break;

            }
            case 2:{
                printf("twenty");
                break;

            }
            case 3:{
                printf("thirty");
                break;
            }
            case 4:{
                printf("fourty");
                break;
            }
            case 5:{
                printf("fifty");
                break;
            }
            case 6:{
                printf("sixty");
                break;
            }
            case 7:{
                printf("seventy");
                break;
            }
            case 8:{
                printf("eighty");
                break;
            }
            case 9:{
                printf("ninety");
                break;
            }
            default:{
                break;
            }
        }
        //1의 자리수 영어를 출력한다.
        switch (N) {
            case 0:{
                break;
            }
            case 1:{
                printf("-one");
                break;

            }
            case 2:{
                printf("-two");
                break;

            }
            case 3:{
                printf("-three");
                break;
            }
            case 4:{
                printf("-four");
                break;
            }
            case 5:{
                printf("-five");
                break;
            }
            case 6:{
                printf("-six");
                break;
            }
            case 7:{
                printf("-seven");
                break;
            }
            case 8:{
                printf("-eight");
                break;
            }
            case 9:{
                printf("-nine");
                break;
            }
            default:{
                break;
            }
        }

    }
    //나머지는 none을 출력한다.
    else {
        printf("none");
    }
    return;
}