//
// Created by denovo on 2022/09/11.
//
#include <stdio.h>


int five1(){
    int N;
    scanf("%d",&N);


   if(N<0){
       printf("cold, indoor");
   }else if(N<40){
       printf("moderate, outdoor");
   } else{
       printf("hot, indoor");
   }

    return 0;
}