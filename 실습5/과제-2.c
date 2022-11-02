//
// Created by denovo on 2022/09/21.
//
#include <stdio.h>
//
//[ 문제 2 ] 세종 분식에는 아래와 같은 메뉴가 있다. 대한이는 민국이와 함께 만 원짜리 지폐 한
//        장으로 들고 3개의 메뉴를 시켜 먹었다. 총 금액과 잔돈을 계산하여 예시와 같이 출력하는 프로그램을 작성하시오. - 음식 값이 예산(만원)을 초과하는 경우에는 잔돈이 아닌 “Insufficient Money”를 출력한다. - 메뉴 중복 선택가능. (예시) 메뉴 입력이 2 2 2처럼 같은 메뉴 주문도 가능하다. - 메뉴는 무조건 3개를 시킨다. 1. 떡라면 5,000원, 2. 김밥 2,500원, 3. 떡볶이 2,000원, 4. 튀김 1,500원, 5. 콜라 1,000원

void five2T(){
    //세개의 메뉴번호를 입력받을 int를 선언한다.
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    // total 가격을 저장할 변수를 선언한다.
    int total=0;

    //조건문을 이용하여 a에 받은 메뉴의 가격을 total에 더해준다.
    if(a==1){
        total+=5000;
    }
    else if(a==2){
        total+=2500;
    }
    else if(a==3){
        total+=2000;
    }
    else if(a==4){
        total+=1500;

    }
    else if(a==5){
        total+=1000;
    }
    //조건문을 이용하여 b에 받은 메뉴의 가격을 total에 더해준다.
    if(b==1){
        total+=5000;

    }
    else if(b==2){
        total+=2500;

    }
    else if(b==3){
        total+=2000;
    }
    else if(b==4){
        total+=1500;
    }
    else if(b==5){
        total+=1000;
    }

    //조건문을 이용하여 c에 받은 메뉴의 가격을 total에 더해준다.
    if(c==1){
        total+=5000;

    }
    else if(c==2){
        total+=2500;

    }
    else if(c==3){
        total+=2000;

    }
    else if(c==4){
        total+=1500;
    }
    else if(c==5){
        total+=1000;
    }

    printf("Total:%d\n",total);
    //total가격이 10000원을 넘으면 Insufficient Money을 출력한다.
    if(total>10000){
        printf("Insufficient Money");
    } else{ // 그렇지않다면 잔돈을 출력해준다.
        printf("Change:%d",10000-total);


    }

    return;
}