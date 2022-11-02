#include <stdio.h>

//4장2절 [ 문제 1 ] 0~99999사이의 정수를 입력 받아 각 자리를 분리하여 출력하는 프로그램을 작성하시오. (만=TTHO, 천=THO, 백=HUN, 십=TEN) - □는 빈칸 한 칸 띄우기를 의미한다. 입력 예시 1 출력 예시 1
//12345 1TTHO□2THO□3HUN□4TEN□5
//입력 예시 2 출력 예시 2
//2016 0TTHO 2THO 0HUN 1TEN 6
//입력 예시 3 출력 예시 3
//100 0TTHO 0THO 1HUN 0TEN 0
int four1() {
    int num;

    scanf("%d", &num);
    int ttho = num / 10000;
    num -= ttho * 10000;
    int tho = num / 1000;
    num -= tho * 1000;
    int hun = num / 100;
    num -= hun * 100;
    int ten = num / 10;
    num -= ten * 10;

    printf("%dTTHO %dTHO %dHUN %dTEN %d", ttho, tho, hun, ten, num);


    return 0;
}
;