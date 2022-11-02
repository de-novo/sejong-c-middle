//
// Created by denovo on 2022/09/14.
//
#include <stdio.h>
//(야구 게임) 다음 프로그램을 작성하시오. 1) 정답을 나타내는 0~9 사이의 서로 다른 정수 3개를 입력 받는다. 2) 정답을 추측한 0~9 사이의 서로 다른 정수 3개를 입력 받는다. 3) 예시와 같이, 스트라이크 개수와 볼의 개수를 출력한다. 스트라이크 개수: 값도 맞추고 위치도 맞춘 숫자의 개수
// 볼 개수: 값은 맞췄지만, 위치는 틀린 숫자의 개수
void five11(){
    int a,s,d;
    int q,w,e;

    scanf("%d %d %d",&a,&s,&d);
    scanf("%d %d %d",&q,&w,&e);

    int S = 0;
    int B = 0;

    a==q?S++:S;
    s==w?S++:S;
    d==e?S++:S;

    a==w?B++:B;
    a==e?B++:B;

    s==q?B++:B;
    s==e?B++:B;

    d==q?B++:B;
    d==w?B++:B;

    printf("%dS%dB",S,B);

    return;
}