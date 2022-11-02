//
// Created by denovo on 2022/09/28.
//
//
// Created by denovo on 2022/09/28.
//
//
// Created by denovo on 2022/09/28.
//
//
// Created by denovo on 2022/09/28.
//
//
// Created by denovo on 2022/09/27.
//
#include <stdio.h>
void six8pr() {
   int n;
   scanf("%d",&n);
   int sum = 0;
   while (1){
       int k = n%10;
       sum+=k;

       if(k==n){
           break;
       }

       n = n/10;

   }
    printf("%d",sum);
}