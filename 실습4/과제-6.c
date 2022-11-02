//
// Created by denovo on 2022/09/14.
//[ 문제 6 ] 정수 세 개를 입력 받는다. 세 수 중에서 중앙값을 출력하시오. 같은 수는 입력되지 않는다고 가정한다. - 힌트: [ 문제 5 ]번과 해결방법이 비슷하다. - if문등 배우지 않은 문법 사용금지
#include <stdio.h>

void four6T(){
    int a,b,c;
    //정수 세개를 입력 받는다
    scanf("%d %d %d",&a,&b,&c);

    // 중앙값을 저장할 변수를 선언한다.
    int mid;

    // 조건연산자를 이용하여
    // b<=a<=c 이거나 c<=a<=b 일경우 a
    // a<=b<=c || c<=b<=a 일경우 b
    // a <= c <= b || b<= c <=a 일경우 c 를 mid에 저장한다
    (b>=a&&a>=c)||(b<=a&&a<=c) ? mid = a :(( a>=b&&b>=c) || (a<=b&&b<=c) ?  mid = b : ((a<=c&&c<=b)||(b<=c&&c<=a)? mid = c : mid));
    printf("%d",mid);

    return;
}
