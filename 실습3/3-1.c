#include <stdio.h>

//16진수인 정수를 입력 받아 10진수와 8진수로 출력하는 코드를 작성하시오.
//- 힌트: 16진수, 10진수, 8진수 서식 지정자 사용하기

// %x => 16진수 %o => 8진수 %d => 10진수
int three1() {
    int num;
    scanf("%x",&num);

    printf("decimal number = %d\n",num);
    printf("octal number = %o",num);


    return 0;
}
