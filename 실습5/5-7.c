//
// Created by denovo on 2022/09/14.
//

#include <stdio.h>
//5장4절 [ 문제 7 ] 다음과 같이 동작하는 UP DOWN 숫자 맞추기 게임 프로그램을 작성하시오. ① 첫 줄에 게임의 정답을 나타내는 정수 N (1≤N≤6)이 입력된다. ② 두 번째 줄에 정답을 추측한 수 M이 입력된다. ③ 추측이 맞으면 ‘RIGHT’를 출력 한 후 프로그램을 종료한다.
//④ 추측한 수가 정답보다 작으면 ‘UP’을 출력하고, 정답보다 크면 ‘DOWN’을 출력한다. ⑤ 추측이 틀린 경우, ②~④의 과정을 한 번 더 수행한 후 프로그램을 종료한다.
//(단, 출력은 그 다음 줄에)

void five7(){
    int N ;

    scanf("%d",&N);

    int M ;
    scanf("%d",&M);

    if(M==N){
        printf("RIGHT\n");
        return ;
    } else if(M>N){
        printf("DOWN\n");
    } else{
        printf("UP\n");
    }

    scanf("%d",&M);

    if(M==N){
        printf("RIGHT\n");
    } else if(M>N){
        printf("DOWN\n");
    } else{
        printf("UP\n");
    }

    return;
}