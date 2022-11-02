
#include <stdio.h>
void six2_1T() {
    //범위를 입력받는다
    int n,m;
    scanf("%d %d",&n, &m);

    //가장많은 약수를 갖는것을 저장할 변수를 선언한다.
    int Many = 0;
    int AN = 0;

    //범위만큼 반복문을 돌려준다.
    for(int i = n ;i<=m;i++){
        //약수의 개수를 구해줄 변수를 초기화한다.
        int C=0;

        // i의 약수를 구해준다.
        for(int j = 1; j<=i;j++){
            //약수마다 C에 1을더해준다.
            if(i%j==0){
                C++;
            }
        }
        //C가 현재 알고있는 최대개수의 약수보다 크다면
        //Many에 C(개수)를 AN(수)에 i를 저장해준다.
        if (C>Many){
            Many =C;
            AN = i;
        }



    }
    printf("%d %d",AN,Many);




}