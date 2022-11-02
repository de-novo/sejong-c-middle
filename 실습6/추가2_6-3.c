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
void six3add2() {
    int n;
    scanf("%d",&n);

    int sum = 0 ;
    int r= 0;
    for (int i = 1 ;i<=n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
//    printf("%d",sum);
    while (1){
        int k = sum%10;
        r = r*10 + k;
        if(sum==k){
            break;
        }
        sum/=10;
    }
    printf("%d",r);
}

