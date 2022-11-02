//
// Created by denovo on 2022/09/21.
//
#include <stdio.h>
//[ 문제 1 ] 세 과목 점수 (0~100점 사이 정수)를 입력받는다. 세 과목 평균점수가
//◌ 90점 이상이면 “A”출력
//◌ 80점 이상이면 “B”출력
//◌ 70점 이상이면 “C” 출력
//◌ 60점 이상이면 “D” 출력
//◌ 어느 조건에도 해당되지 않으면 “F”가 출력되도록 작성하시오. – 그다음, 입력된 값들 중 최대값과 최소값을 화면에 출력하시오.

void five1T(){
    // 세과목의 성적을 입력받는다
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    // 세과목의 평균을 구한다.
    double grade_num = (a+b+c)/3;

    //가장 높은 성적을 저장할 max를 a로 초기화한다.
    int max = a;
    //가장 낮은 성적을 저장한 min을 a로 초기화한다.
    int min = a;

    //반복문을 사용할수없기에 삼항연산자를 이용하여 max를 구해준다
    max = max<=b&&max<=c?
          (b>=c?b:c):max<=b&&max>=c?b:max<=c&&max>=b?c:a;

    //반복문을 사용할수없기에 삼항연산자를 이용하여 min 구해준다
    min = min>=b&&min>=c?
            (b>=c?c:b):min>=b&&min<=c?b:min<=b&&min>=c?c:a;



    //평균이 90점이상이면 A를 출력한다
    if(grade_num>=90){
        printf("A\n");

    }
    //평균이 80점이상이면 B를 출력한다
    else if(grade_num>=80){
        printf("B\n");

    }
    //평균이 70점이상이면 C를 출력한다
    else if(grade_num>=70){
        printf("C\n");
    }
    //평균이 60점이상이면 D를 출력한다
    else if(grade_num>=60){
        printf("D\n");

    }
    //나머지는 F를 출력한다.
    else{
        printf("F\n");
    }
    //최고성적과 최저성적을 출력한다.
    printf("max: %d\n",max);
    printf("min: %d\n",min);

    return;
}