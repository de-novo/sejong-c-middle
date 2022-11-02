//
// Created by denovo on 2022/09/08.
//
#include <stdio.h>
//4장2절 [ 문제 2 ] 양의 정수를 입력 받아 시:분:초 형태로 출력하는
//- 응용 : 분과 초는 항상 두 자리 수로 출력하도록 수정하시오.
int four2() {

    int s;
    scanf("%d", &s);

    int time = s / 3600;
    s = s % 3600;
    int minute = s / 60;
    s %= 60;

    printf("%d:%d:%d", time, minute, s);
    printf("\n");

    printf("%02d:%02d:%02d", time, minute, s);

    return 0;
}