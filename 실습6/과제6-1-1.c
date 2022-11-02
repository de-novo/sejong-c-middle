
#include <stdio.h>
void six1_1T() {
    //입력 받을 횟수를 입력받는다
    int n;
    scanf("%d",&n);
    //입력받은 횟수만큼 반복문을 돌려준다.
    for(int i = 0 ;i<n;i++){
        //약수를 구할수를 입력받는다.
        int M;
        scanf("%d",&M);
        printf("%d:",M);
        //약수를 구하고 출력해준다.
        for(int j = 1; j<=M;j++){
            if(M%j==0){
                printf(" %d",j);
            }
        }
        printf("\n");









    }





}