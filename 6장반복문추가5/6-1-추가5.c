

//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//


#include <stdio.h>
void six1add5() {
    int n ;

    scanf("%d",&n);
    int mul = 1;
    while (1){
        int k = n%10;
        mul*=k;
        if(n==k)
        {
            break;
        }
        n /=10;


    }
    printf("%d",mul);

}



