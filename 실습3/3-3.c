//
// Created by denovo on 2022/09/07.
//
#include <stdio.h>
//사각형의 가로와 세로에 해당하는 부동소수 2개를 입력받고 넓이를 계산하시오. ◦ 부동소수형 입출력 (소수점 2자리까지 출력) ◦ 부동소수형 변수를 정확도가 높은 double 자료형으로 선언하시오. 입력 예시 1 출력 예시 1
//4.2
//5.1
//area = 21.42
int three3(){
    double a;
    double b;
    scanf("%lf",&a);
    scanf("%lf",&b);


    printf("area = %0.2lf",a*b);


    return 0;
}