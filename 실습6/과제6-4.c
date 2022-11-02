//
// Created by denovo on 2022/09/29.
//
#include <stdio.h>

void six4T(){
    // 찾을 수 n을 입력받는다
    int n;
    scanf("%d",&n);
    //같은 수의 개수 저장할 변수를 선언한다
    int e=0;
    //작은 수의 개수를 저장할 변수를 선언한다.
    int s=0;
    //큰 수의 개수를 저장항 변수를 선언한다.
    int b = 0 ;
    //while문으로 0이나올때 까지 수를 입력받는다

    while (1){
        int m ;
        scanf("%d",&m);
        // 0을 입력받으면 종료한다
        if(m==0){
            break;
        }
        // 각자리수의 수를 비교하여 조건에 맞게 m n e에 개수를 더해준다
        while (1){
            int q= m%10;


            if(q==n){
                e++;
            } else if(q<n){
                s++;
            } else{
                b++;
            }
            if(m==q&m<10){
                break;
            }

            m=m/10;
        }


    }
    printf("%d %d %d",e,s,b);


}