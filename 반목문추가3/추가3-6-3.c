

//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//

//소인수분해


#include <stdio.h>
void six3add3() {
    int odd_sum=0;
    int odd_num=0;
    int even_sum=0;
    int even_num=0;

    while(1){
       int N;
       scanf("%d",&N);
       if(N<=0){
           break;
       }
       if(N%2==0){
           even_sum+=N;
           even_num+=1;
       } else{
           odd_sum+=N;
           odd_num+=1;

       }
   }

   double odd_avg ,even_avg;

    if(odd_num==0){
        odd_avg = 0;
    } else{
        odd_avg =( double)odd_sum/odd_num;
    }

    if(even_num==0){
        even_avg= 0;
    } else{
        even_avg  =(double)even_sum/even_num;
    }

    printf("%0.2lf %0.2lf",even_avg,odd_avg);
}

