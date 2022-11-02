//
// Created by denovo on 2022/09/28.
//

#include <stdio.h>
void six5_1T() {
    int N;
    scanf("%d",&N);

    int R = 0;
    while (1){
        int 나머지 = N%10;
        if(N==나머지&N<10){
            break;
        }
        R = R*10 + 나머지;
        N= N/10;
    }
    printf("%d",R);
}
//n=3
// i=1    j=1
// 1,1 1,2    //1,3
//2,2 2,3 2,4
//3,1 3,2 3,3 3,4 4,5
