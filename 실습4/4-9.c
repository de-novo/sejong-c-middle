#include <stdio.h>

//4장6절 [ 문제 9 ] 서로 다른 두 정수 N, M을 입력 받고, 그 중 더 큰 수를 출력하는 프로그램을
//        작성하시오. - 입력 : 한 줄에 N, M이 순서대로 입력된다. - 출력 : N과 M중 더 큰 수를 출력한다.
int four9(){


    int a,b ;
    scanf("%d %d",&a,&b);
    printf("%d",a>b?a:b);

    return  0;
}