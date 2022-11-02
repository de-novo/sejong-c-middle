//
// Created by denovo on 2022/09/26.
//
#include <stdio.h>


//void six4(){
//    int n,m;
//
//    scanf("%d %d",&n,&m);
//
//
//    int a=1;
//
//
//    for(int i = 1 ; i<=(m>n?n:m); i++){
//        if(n%i==0&m%i==0){
//            a=i;
//        }
//    }
//
//    printf("%d",a);
//
//
//    return;
//}


void six4(){
    int n,m;

    scanf("%d %d",&n,&m);

    int a=1;
    int i=1;
//
//
//    for(int i = 1 ; i<=(m>n?n:m); i++){
//        if(n%i==0&m%i==0){
//            a=i;
//        }
//    }


    while (i<=(m>n?n:m)){

        if(n%i==0&m%i==0){
            a=i;
        }
            i++;
    }

    printf("%d",a);


    return;
}