//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//

#include <stdio.h>
void six5add2() {
    int n;
    scanf("%d",&n);
    int r=0;
    while (1){
        int k = n%10;
        r = r*10+k;
        if(n==k){
            break;
        }
        n/=10;
    }
    for(int i=2; i<=r;i++){
        for (int j = 2; j <=i ; j++) {
            if(i%j==0&&j!=i){
                break;
            } else if(j==i){
                printf(" %d",i);
            }
        }
    }
}

