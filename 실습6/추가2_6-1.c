//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//

#include <stdio.h>
void six1add2() {
    double n ;
    scanf("%lf",&n);
    double near = n;
    double mingap;
    int i = 0;
    while (1){
        i++;
        double k;
        scanf("%lf",&k);
        if(k<=1&&i>=3){
            break;
        }

        double gap = n>k ? n-k: k-n;

        if(i==1){

            mingap = gap;
            near = k;

        }else{
           if(gap<mingap){
               mingap=gap;

               near = k;
           }

        }

    }
    printf("%0.2lf",near);
}

