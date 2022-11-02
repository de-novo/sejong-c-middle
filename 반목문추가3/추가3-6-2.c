//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//

//소인수분해


#include <stdio.h>
void six2add3() {
    int N;
    scanf("%d",&N);
    while (1){
        int c;
        if(N==1){
            break;
        }

        for(int i = 2 ; i<=N; i++){
            int t = 1;
            for(int j = 2; j<=i;j++){
                if(i%j==0&&i!=j){
                    break;
                } else if(i==j&&N%i==0){
                    c=i;
                    t = 0;
                    break;
                }
            }
            if(t==0){
                break;
            }
        }
        printf(" %d",c);
        N/=c;
    }

}

