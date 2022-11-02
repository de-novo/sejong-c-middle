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
void six6add2() {
    while (1){
        int a,s,d;
        scanf("%d %d %d",&a,&s,&d);
        if(a<=0||s<=0||d<=0){
            break;
        }

        int median = a;

        if(a<s&&s<d||a>s&&s>d){
            median = s;
        } else if(a<d&&d<s||a>d&&d>s){
            median = d;
        }
        printf("%d\n",median);
    }



}

