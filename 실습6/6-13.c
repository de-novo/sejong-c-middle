//
// Created by denovo on 2022/09/27.
//
//
// Created by denovo on 2022/09/27.
//
#include <stdio.h>
void six13() {

    int sum=0;
    double Av;
    int num = 0;
    while (1){
        int n;
        scanf("%d",&n);

        if(n>100){
            continue;
        }
        if(n<=0){
            break;
        }
        sum +=n;
        num +=1;

    }
    Av=(double)sum/(double)num;
    printf("%d %0.2lf %d",sum,Av,num);
//    printf("%d",sum);
}
